#ifndef ParameterTypes_hxx
#define ParameterTypes_hxx

#include "sip2/sipstack/BranchParameter.hxx"
#include "sip2/sipstack/DataParameter.hxx"
#include "sip2/sipstack/QuotedDataParameter.hxx"
#include "sip2/sipstack/QopParameter.hxx"
#include "sip2/sipstack/IntegerParameter.hxx"
#include "sip2/sipstack/FloatParameter.hxx"
#include "sip2/sipstack/ExistsParameter.hxx"
#include "sip2/sipstack/ParameterTypeEnums.hxx"
#include "sip2/sipstack/Symbols.hxx"

namespace Vocal2
{

class ParamBase
{
   public:
      virtual ParameterTypes::Type getTypeNum() const = 0;
};

class Transport_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::transport;}
      Transport_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::transport] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::transport] = Symbols::transport;
      }
};
extern Transport_Param p_transport;

class User_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::user;}
      User_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::user] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::user] = Symbols::user;
      }
};
extern User_Param p_user;

class Method_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::method;}
      Method_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::method] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::method] = Symbols::method;
      }
};
extern Method_Param p_method;

class Ttl_Param : public ParamBase
{
   public:
      typedef IntegerParameter Type;
	  typedef IntegerParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::ttl;}
      Ttl_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::ttl] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::ttl] = Symbols::ttl;
      }
};
extern Ttl_Param p_ttl;

class Maddr_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::maddr;}
      Maddr_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::maddr] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::maddr] = Symbols::maddr;
      }
};
extern Maddr_Param p_maddr;

class Lr_Param : public ParamBase
{
   public:
      typedef ExistsParameter Type;
	  typedef ExistsParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::lr;}
      Lr_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::lr] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::lr] = Symbols::lr;
      }
};
extern Lr_Param p_lr;

class Q_Param : public ParamBase
{
   public:
      typedef FloatParameter Type;
	  typedef FloatParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::q;}
      Q_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::q] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::q] = Symbols::q;
      }
};
extern Q_Param p_q;

class Purpose_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::purpose;}
      Purpose_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::purpose] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::purpose] = Symbols::purpose;
      }
};
extern Purpose_Param p_purpose;

class Expires_Param : public ParamBase
{
   public:
      typedef IntegerParameter Type;
	  typedef IntegerParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::expires;}
      Expires_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::expires] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::expires] = Symbols::expires;
      }
};
extern Expires_Param p_expires;

class Handling_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::handling;}
      Handling_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::handling] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::handling] = Symbols::handling;
      }
};
extern Handling_Param p_handling;

class Tag_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::tag;}
      Tag_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::tag] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::tag] = Symbols::tag;
      }
};
extern Tag_Param p_tag;

class ToTag_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::toTag;}
      ToTag_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::toTag] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::toTag] = Symbols::toTag;
      }
};
extern ToTag_Param p_toTag;

class FromTag_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::fromTag;}
      FromTag_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::fromTag] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::fromTag] = Symbols::fromTag;
      }
};
extern FromTag_Param p_fromTag;

class Duration_Param : public ParamBase
{
   public:
      typedef IntegerParameter Type;
	  typedef IntegerParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::duration;}
      Duration_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::duration] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::duration] = Symbols::duration;
      }
};
extern Duration_Param p_duration;

class Branch_Param : public ParamBase
{
   public:
      typedef BranchParameter Type;
      typedef BranchParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::branch;}
      Branch_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::branch] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::branch] = Symbols::branch;
      }
};
extern Branch_Param p_branch;

class Received_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::received;}
      Received_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::received] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::received] = Symbols::received;
      }
};
extern Received_Param p_received;

class Mobility_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::mobility;}
      Mobility_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::mobility] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::mobility] = Symbols::mobility;
      }
};
extern Mobility_Param p_mobility;

class Comp_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::comp;}
      Comp_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::comp] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::comp] = Symbols::comp;
      }
};
extern Comp_Param p_comp;

class Rport_Param : public ParamBase
{
   public:
      typedef IntegerParameter Type;
	  typedef IntegerParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::rport;}
      Rport_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::rport] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::rport] = Symbols::rport;
      }
};
extern Rport_Param p_rport;
 
class Id_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::id;}
      Id_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::id] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::id] = Symbols::id;
      }
};
extern Id_Param p_id;

class Reason_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::reason;}
      Reason_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::reason] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::reason] = Symbols::reason;
      }
};
extern Reason_Param p_reason;

class Retry_After_Param : public ParamBase
{
   public:
      typedef IntegerParameter Type;
	  typedef IntegerParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::retryAfter;}
      Retry_After_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::retryAfter] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::retryAfter] = Symbols::retryAfter;
      }
};
extern Retry_After_Param p_retryAfter;

//auth parameters
class Algorithm_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::algorithm;}
      Algorithm_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::algorithm] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::algorithm] = Symbols::algorithm;
      }
};
extern Algorithm_Param p_algorithm;

class Cnonce_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::cnonce;}
      Cnonce_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::cnonce] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::cnonce] = Symbols::cnonce;
      }
};
extern Cnonce_Param p_cnonce;

class Nonce_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::nonce;}
      Nonce_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::nonce] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::nonce] = Symbols::nonce;
      }
};
extern Nonce_Param p_nonce;

class Domain_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::domain;}
      Domain_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::domain] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::domain] = Symbols::domain;
      }
};
extern Domain_Param p_domain;

class Nc_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::nc;}
      Nc_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::nc] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::nc] = Symbols::nc;
      }
};
extern Nc_Param p_nc;

class Opaque_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::opaque;}
      Opaque_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::opaque] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::opaque] = Symbols::opaque;
      }
};
extern Opaque_Param p_opaque;

class Realm_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::realm;}
      Realm_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::realm] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::realm] = Symbols::realm;
      }
};
extern Realm_Param p_realm;

class Response_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::response;}
      Response_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::response] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::response] = Symbols::response;
      }
};
extern Response_Param p_response;

class Stale_Param : public ParamBase  //new type, bool true/false?
{
   public:
      typedef DataParameter Type;
	  typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::stale;}
      Stale_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::stale] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::stale] = Symbols::stale;
      }
};
extern Stale_Param p_stale;

class Username_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::username;}
      Username_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::username] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::username] = Symbols::username;
      }
};
extern Username_Param p_username;

class Uri_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::uri;}
      Uri_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::uri] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::uri] = Symbols::uri;
      }
};
extern Uri_Param p_uri;

class Qop_Options_Param : public ParamBase
{
   public:
      typedef QuotedDataParameter Type;
      typedef QuotedDataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::qopOptions;}
      Qop_Options_Param()
      {
         ParameterTypes::ParameterNames[ParameterTypes::qopOptions] = Symbols::qop;
      }
};
extern Qop_Options_Param p_qopOptions;

class Qop_Param : public ParamBase
{
   public:
      typedef DataParameter Type;
      typedef DataParameter::Type DType;
      virtual ParameterTypes::Type getTypeNum() const {return ParameterTypes::qop;}
      Qop_Param()
      {
         ParameterTypes::ParameterNames[ParameterTypes::qop] = Symbols::qop;
      }
};
extern Qop_Param p_qop;

class Qop_Factory_Param
{
   public:
      typedef QopParameter Type;
      Qop_Factory_Param()
      {
         ParameterTypes::ParameterFactories[ParameterTypes::qopFactory] = Type::decode;
         ParameterTypes::ParameterNames[ParameterTypes::qopFactory] = Symbols::qop;
      }
};
extern Qop_Factory_Param p_qopFactory;










}

#endif


/* ====================================================================
 * The Vovida Software License, Version 1.0 
 * 
 * Copyright (c) 2000 Vovida Networks, Inc.  All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 
 * 3. The names "VOCAL", "Vovida Open Communication Application Library",
 *    and "Vovida Open Communication Application Library (VOCAL)" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact vocal@vovida.org.
 *
 * 4. Products derived from this software may not be called "VOCAL", nor
 *    may "VOCAL" appear in their name, without prior written
 *    permission of Vovida Networks, Inc.
 * 
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND
 * NON-INFRINGEMENT ARE DISCLAIMED.  IN NO EVENT SHALL VOVIDA
 * NETWORKS, INC. OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT DAMAGES
 * IN EXCESS OF $1,000, NOR FOR ANY INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * ====================================================================
 * 
 * This software consists of voluntary contributions made by Vovida
 * Networks, Inc. and many individuals on behalf of Vovida Networks,
 * Inc.  For more information on Vovida Networks, Inc., please see
 * <http://www.vovida.org/>.
 *
 */

/* Local Variables: */
/* c-file-style: "ellemtel" */
/* End: */