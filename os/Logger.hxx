#ifndef Logger_hxx
#define Logger_hxx

#include <util/Socket.hxx>
#include <util/Log.hxx>
#include <util/SysLogStream.hxx>
#include <util/Lock.hxx>

#ifdef WIN32

#ifdef NO_DEBUG
// Suppress debug loging at compile time
#define DebugLog(...)
#else
#define DebugLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::DEBUG, ...)
#endif

#define CritLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::CRIT, __VA_ARGS__)

#define ErrLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::ERR, __VA_ARGS__)

#define WarningLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::WARNING, __VA_ARGS__)

#define InfoLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::INFO, __VA_ARGS__)

// do/while allows a {} block in an expression
#define GenericLog(system__, level__,  ...)                     \
do                                                              \
{                                                               \
  if (Vocal2::GenericLogImpl::isLogging(level__))               \
  {                                                             \
     Vocal2::Lock lock(Vocal2::Log::_mutex);                    \
     if (Vocal2::GenericLogImpl::isLogging(level__))            \
     {                                                          \
        Vocal2::Log::tags(level__, system__,                    \
                          Vocal2::GenericLogImpl::Instance())   \
          << __FILE__ << ':' << __LINE__ << DELIM               \
          __VA_ARGS__  << std::endl;                            \
     }                                                          \
  }                                                             \
} while (0)

#else

/**
   Defines a set of logging macros, one for each level of logging.

   Example:
#include Logger.hxx
#define VOCAL_SUBSYSTEM Vocal2::Subsystem::SIP
   ...
   DebugLog(<< "hi there " << mix << 5 << types);  // note leading << and no endl
*/

//#define VOCAL_SUBSYSTEM Vocal2::Subsystem::NONE



// JF
#if ( (__GNUC__ < 3) )


// variadic to handle comma in template arguments
#define DebugLog(arg__, args__...)                                                 \
                                         /* eat the comma if no extra arguments */ \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::DEBUG, arg__, ##args__)

#define CritLog(arg__, args__...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::CRIT, arg__, ##args__)

#define ErrLog(arg__, args__...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::ERR, arg__, ##args__)

#define WarningLog(arg__, args__...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::WARNING, arg__, ##args__)

#define InfoLog(arg__, args__...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::INFO, arg__, ##args__)

#ifdef NO_DEBUG
// Suppress debug loging at compile time
#define DebugLog(arg__, args__...)
#endif

// do/while allows a {} block in an expression
#define GenericLog(system__, level__, arg__, args__...)         \
do                                                              \
{                                                               \
  if (Vocal2::GenericLogImpl::isLogging(level__))               \
  {                                                             \
     Vocal2::Lock lock(Vocal2::Log::_mutex);                    \
     if (Vocal2::GenericLogImpl::isLogging(level__))            \
     {                                                          \
        Vocal2::Log::tags(level__, system__,                    \
                          Vocal2::GenericLogImpl::Instance())   \
          << __FILE__ << ':' << __LINE__ << DELIM               \
                  /* eat the comma if no extra arguments */     \
          arg__ , ##args__ << std::endl;                        \
     }                                                          \
  }                                                             \
} while (0)


#else

#ifdef NO_DEBUG
// Suppress debug loging at compile time
#define DebugLog(arg__, ...)
#else
#define DebugLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::DEBUG, __VA_ARGS__ )
#endif

#define CritLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::CRIT, __VA_ARGS__ )

#define ErrLog( ...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::ERR, __VA_ARGS__ )

#define WarningLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::WARNING, __VA_ARGS__ )

#define InfoLog(...) \
GenericLog(VOCAL_SUBSYSTEM, Vocal2::Log::INFO, __VA_ARGS__ )

// do/while allows a {} block in an expression
#define GenericLog(system__, level__,  ...)                     \
do                                                              \
{                                                               \
  if (Vocal2::GenericLogImpl::isLogging(level__))               \
  {                                                             \
     Vocal2::Lock lock(Vocal2::Log::_mutex);                    \
     if (Vocal2::GenericLogImpl::isLogging(level__))            \
     {                                                          \
        Vocal2::Log::tags(level__, system__,                    \
                          Vocal2::GenericLogImpl::Instance())   \
          << __FILE__ << ':' << __LINE__ << DELIM               \
          __VA_ARGS__  << std::endl;                            \
     }                                                          \
  }                                                             \
} while (0)

#endif

#endif

namespace Vocal2
{

class GenericLogImpl :  public Log 
{
   public:
      static std::ostream& Instance()
      {
         if (Log::_type == Log::SYSLOG)
         {
            if (mLogger == 0)
            {
               mLogger = new SysLogStream;
            }
            return *mLogger;
         }
         else 
		 {
			 if (Log::_type == Log::FILE)
         {
            assert(0);
         }
		 }

		 return std::cout;
      }
      
      static bool isLogging(Log::Level level) 
      {
         return (level <= Log::_level);
      }

   private:
      static std::ostream* mLogger;
};
 
} // namespace Vocal

#endif
