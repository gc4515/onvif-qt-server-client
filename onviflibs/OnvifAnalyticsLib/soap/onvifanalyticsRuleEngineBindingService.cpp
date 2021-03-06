/* onvifanalyticsRuleEngineBindingService.cpp
   Generated by gSOAP 2.8.22 from rcx.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "onvifanalyticsRuleEngineBindingService.h"

RuleEngineBindingService::RuleEngineBindingService()
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

RuleEngineBindingService::RuleEngineBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	RuleEngineBindingService_init(_soap->imode, _soap->omode);
}

RuleEngineBindingService::RuleEngineBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingService_init(iomode, iomode);
}

RuleEngineBindingService::RuleEngineBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	RuleEngineBindingService_init(imode, omode);
}

RuleEngineBindingService::~RuleEngineBindingService()
{	if (this->soap_own)
		soap_free(this->soap);
}

void RuleEngineBindingService::RuleEngineBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"analyticsws", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void RuleEngineBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void RuleEngineBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	RuleEngineBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
RuleEngineBindingService *RuleEngineBindingService::copy()
{	RuleEngineBindingService *dup = SOAP_NEW_COPY(RuleEngineBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int RuleEngineBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int RuleEngineBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int RuleEngineBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int RuleEngineBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int RuleEngineBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int RuleEngineBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void RuleEngineBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void RuleEngineBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *RuleEngineBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void RuleEngineBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void RuleEngineBindingService::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *RuleEngineBindingService::soap_header()
{	return this->soap->header;
}

int RuleEngineBindingService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				break;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	return this->soap->error;
}

SOAP_SOCKET RuleEngineBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET RuleEngineBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int RuleEngineBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int RuleEngineBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___analyticsws__GetSupportedRules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__CreateRules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__DeleteRules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__GetRules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__ModifyRules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__GetServiceCapabilities(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__GetSupportedAnalyticsModules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__CreateAnalyticsModules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__DeleteAnalyticsModules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__GetAnalyticsModules(struct soap*, RuleEngineBindingService*);
static int serve___analyticsws__ModifyAnalyticsModules(struct soap*, RuleEngineBindingService*);

int RuleEngineBindingService::dispatch()
{	return dispatch(this->soap);
}

int RuleEngineBindingService::dispatch(struct soap* soap)
{	RuleEngineBindingService_init(soap->imode, soap->omode);
	soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:GetSupportedRules"))
		return serve___analyticsws__GetSupportedRules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:CreateRules"))
		return serve___analyticsws__CreateRules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:DeleteRules"))
		return serve___analyticsws__DeleteRules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:GetRules"))
		return serve___analyticsws__GetRules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:ModifyRules"))
		return serve___analyticsws__ModifyRules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:GetServiceCapabilities"))
		return serve___analyticsws__GetServiceCapabilities(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:GetSupportedAnalyticsModules"))
		return serve___analyticsws__GetSupportedAnalyticsModules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:CreateAnalyticsModules"))
		return serve___analyticsws__CreateAnalyticsModules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:DeleteAnalyticsModules"))
		return serve___analyticsws__DeleteAnalyticsModules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:GetAnalyticsModules"))
		return serve___analyticsws__GetAnalyticsModules(soap, this);
	if (!soap_match_tag(soap, soap->tag, "analyticsws:ModifyAnalyticsModules"))
		return serve___analyticsws__ModifyAnalyticsModules(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___analyticsws__GetSupportedRules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__GetSupportedRules soap_tmp___analyticsws__GetSupportedRules;
	_analyticsws__GetSupportedRulesResponse analyticsws__GetSupportedRulesResponse;
	analyticsws__GetSupportedRulesResponse.soap_default(soap);
	soap_default___analyticsws__GetSupportedRules(soap, &soap_tmp___analyticsws__GetSupportedRules);
	if (!soap_get___analyticsws__GetSupportedRules(soap, &soap_tmp___analyticsws__GetSupportedRules, "-analyticsws:GetSupportedRules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetSupportedRules(soap_tmp___analyticsws__GetSupportedRules.analyticsws__GetSupportedRules, analyticsws__GetSupportedRulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__GetSupportedRulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__GetSupportedRulesResponse.soap_put(soap, "analyticsws:GetSupportedRulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__GetSupportedRulesResponse.soap_put(soap, "analyticsws:GetSupportedRulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__CreateRules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__CreateRules soap_tmp___analyticsws__CreateRules;
	_analyticsws__CreateRulesResponse analyticsws__CreateRulesResponse;
	analyticsws__CreateRulesResponse.soap_default(soap);
	soap_default___analyticsws__CreateRules(soap, &soap_tmp___analyticsws__CreateRules);
	if (!soap_get___analyticsws__CreateRules(soap, &soap_tmp___analyticsws__CreateRules, "-analyticsws:CreateRules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->CreateRules(soap_tmp___analyticsws__CreateRules.analyticsws__CreateRules, analyticsws__CreateRulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__CreateRulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__CreateRulesResponse.soap_put(soap, "analyticsws:CreateRulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__CreateRulesResponse.soap_put(soap, "analyticsws:CreateRulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__DeleteRules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__DeleteRules soap_tmp___analyticsws__DeleteRules;
	_analyticsws__DeleteRulesResponse analyticsws__DeleteRulesResponse;
	analyticsws__DeleteRulesResponse.soap_default(soap);
	soap_default___analyticsws__DeleteRules(soap, &soap_tmp___analyticsws__DeleteRules);
	if (!soap_get___analyticsws__DeleteRules(soap, &soap_tmp___analyticsws__DeleteRules, "-analyticsws:DeleteRules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeleteRules(soap_tmp___analyticsws__DeleteRules.analyticsws__DeleteRules, analyticsws__DeleteRulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__DeleteRulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__DeleteRulesResponse.soap_put(soap, "analyticsws:DeleteRulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__DeleteRulesResponse.soap_put(soap, "analyticsws:DeleteRulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__GetRules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__GetRules soap_tmp___analyticsws__GetRules;
	_analyticsws__GetRulesResponse analyticsws__GetRulesResponse;
	analyticsws__GetRulesResponse.soap_default(soap);
	soap_default___analyticsws__GetRules(soap, &soap_tmp___analyticsws__GetRules);
	if (!soap_get___analyticsws__GetRules(soap, &soap_tmp___analyticsws__GetRules, "-analyticsws:GetRules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetRules(soap_tmp___analyticsws__GetRules.analyticsws__GetRules, analyticsws__GetRulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__GetRulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__GetRulesResponse.soap_put(soap, "analyticsws:GetRulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__GetRulesResponse.soap_put(soap, "analyticsws:GetRulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__ModifyRules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__ModifyRules soap_tmp___analyticsws__ModifyRules;
	_analyticsws__ModifyRulesResponse analyticsws__ModifyRulesResponse;
	analyticsws__ModifyRulesResponse.soap_default(soap);
	soap_default___analyticsws__ModifyRules(soap, &soap_tmp___analyticsws__ModifyRules);
	if (!soap_get___analyticsws__ModifyRules(soap, &soap_tmp___analyticsws__ModifyRules, "-analyticsws:ModifyRules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ModifyRules(soap_tmp___analyticsws__ModifyRules.analyticsws__ModifyRules, analyticsws__ModifyRulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__ModifyRulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__ModifyRulesResponse.soap_put(soap, "analyticsws:ModifyRulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__ModifyRulesResponse.soap_put(soap, "analyticsws:ModifyRulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__GetServiceCapabilities(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__GetServiceCapabilities soap_tmp___analyticsws__GetServiceCapabilities;
	_analyticsws__GetServiceCapabilitiesResponse analyticsws__GetServiceCapabilitiesResponse;
	analyticsws__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___analyticsws__GetServiceCapabilities(soap, &soap_tmp___analyticsws__GetServiceCapabilities);
	if (!soap_get___analyticsws__GetServiceCapabilities(soap, &soap_tmp___analyticsws__GetServiceCapabilities, "-analyticsws:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetServiceCapabilities(soap_tmp___analyticsws__GetServiceCapabilities.analyticsws__GetServiceCapabilities, analyticsws__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__GetServiceCapabilitiesResponse.soap_put(soap, "analyticsws:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__GetServiceCapabilitiesResponse.soap_put(soap, "analyticsws:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__GetSupportedAnalyticsModules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__GetSupportedAnalyticsModules soap_tmp___analyticsws__GetSupportedAnalyticsModules;
	_analyticsws__GetSupportedAnalyticsModulesResponse analyticsws__GetSupportedAnalyticsModulesResponse;
	analyticsws__GetSupportedAnalyticsModulesResponse.soap_default(soap);
	soap_default___analyticsws__GetSupportedAnalyticsModules(soap, &soap_tmp___analyticsws__GetSupportedAnalyticsModules);
	if (!soap_get___analyticsws__GetSupportedAnalyticsModules(soap, &soap_tmp___analyticsws__GetSupportedAnalyticsModules, "-analyticsws:GetSupportedAnalyticsModules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetSupportedAnalyticsModules(soap_tmp___analyticsws__GetSupportedAnalyticsModules.analyticsws__GetSupportedAnalyticsModules, analyticsws__GetSupportedAnalyticsModulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__GetSupportedAnalyticsModulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__GetSupportedAnalyticsModulesResponse.soap_put(soap, "analyticsws:GetSupportedAnalyticsModulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__GetSupportedAnalyticsModulesResponse.soap_put(soap, "analyticsws:GetSupportedAnalyticsModulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__CreateAnalyticsModules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__CreateAnalyticsModules soap_tmp___analyticsws__CreateAnalyticsModules;
	_analyticsws__CreateAnalyticsModulesResponse analyticsws__CreateAnalyticsModulesResponse;
	analyticsws__CreateAnalyticsModulesResponse.soap_default(soap);
	soap_default___analyticsws__CreateAnalyticsModules(soap, &soap_tmp___analyticsws__CreateAnalyticsModules);
	if (!soap_get___analyticsws__CreateAnalyticsModules(soap, &soap_tmp___analyticsws__CreateAnalyticsModules, "-analyticsws:CreateAnalyticsModules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->CreateAnalyticsModules(soap_tmp___analyticsws__CreateAnalyticsModules.analyticsws__CreateAnalyticsModules, analyticsws__CreateAnalyticsModulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__CreateAnalyticsModulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__CreateAnalyticsModulesResponse.soap_put(soap, "analyticsws:CreateAnalyticsModulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__CreateAnalyticsModulesResponse.soap_put(soap, "analyticsws:CreateAnalyticsModulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__DeleteAnalyticsModules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__DeleteAnalyticsModules soap_tmp___analyticsws__DeleteAnalyticsModules;
	_analyticsws__DeleteAnalyticsModulesResponse analyticsws__DeleteAnalyticsModulesResponse;
	analyticsws__DeleteAnalyticsModulesResponse.soap_default(soap);
	soap_default___analyticsws__DeleteAnalyticsModules(soap, &soap_tmp___analyticsws__DeleteAnalyticsModules);
	if (!soap_get___analyticsws__DeleteAnalyticsModules(soap, &soap_tmp___analyticsws__DeleteAnalyticsModules, "-analyticsws:DeleteAnalyticsModules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeleteAnalyticsModules(soap_tmp___analyticsws__DeleteAnalyticsModules.analyticsws__DeleteAnalyticsModules, analyticsws__DeleteAnalyticsModulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__DeleteAnalyticsModulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__DeleteAnalyticsModulesResponse.soap_put(soap, "analyticsws:DeleteAnalyticsModulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__DeleteAnalyticsModulesResponse.soap_put(soap, "analyticsws:DeleteAnalyticsModulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__GetAnalyticsModules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__GetAnalyticsModules soap_tmp___analyticsws__GetAnalyticsModules;
	_analyticsws__GetAnalyticsModulesResponse analyticsws__GetAnalyticsModulesResponse;
	analyticsws__GetAnalyticsModulesResponse.soap_default(soap);
	soap_default___analyticsws__GetAnalyticsModules(soap, &soap_tmp___analyticsws__GetAnalyticsModules);
	if (!soap_get___analyticsws__GetAnalyticsModules(soap, &soap_tmp___analyticsws__GetAnalyticsModules, "-analyticsws:GetAnalyticsModules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetAnalyticsModules(soap_tmp___analyticsws__GetAnalyticsModules.analyticsws__GetAnalyticsModules, analyticsws__GetAnalyticsModulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__GetAnalyticsModulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__GetAnalyticsModulesResponse.soap_put(soap, "analyticsws:GetAnalyticsModulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__GetAnalyticsModulesResponse.soap_put(soap, "analyticsws:GetAnalyticsModulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___analyticsws__ModifyAnalyticsModules(struct soap *soap, RuleEngineBindingService *service)
{	struct __analyticsws__ModifyAnalyticsModules soap_tmp___analyticsws__ModifyAnalyticsModules;
	_analyticsws__ModifyAnalyticsModulesResponse analyticsws__ModifyAnalyticsModulesResponse;
	analyticsws__ModifyAnalyticsModulesResponse.soap_default(soap);
	soap_default___analyticsws__ModifyAnalyticsModules(soap, &soap_tmp___analyticsws__ModifyAnalyticsModules);
	if (!soap_get___analyticsws__ModifyAnalyticsModules(soap, &soap_tmp___analyticsws__ModifyAnalyticsModules, "-analyticsws:ModifyAnalyticsModules", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ModifyAnalyticsModules(soap_tmp___analyticsws__ModifyAnalyticsModules.analyticsws__ModifyAnalyticsModules, analyticsws__ModifyAnalyticsModulesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	analyticsws__ModifyAnalyticsModulesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || analyticsws__ModifyAnalyticsModulesResponse.soap_put(soap, "analyticsws:ModifyAnalyticsModulesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || analyticsws__ModifyAnalyticsModulesResponse.soap_put(soap, "analyticsws:ModifyAnalyticsModulesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
