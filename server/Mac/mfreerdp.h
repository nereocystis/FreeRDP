/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * FreeRDP Mac OS X Server
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MFREERDP_SERVER_H
#define MFREERDP_SERVER_H

#include <freerdp/freerdp.h>
#include <freerdp/listener.h>
#include <freerdp/codec/rfx.h>
#include <freerdp/codec/nsc.h>
#include <freerdp/channels/wtsvc.h>
#include <freerdp/server/audin.h>
#include <freerdp/server/rdpsnd.h>

struct mf_peer_context
{
	rdpContext _p;

	STREAM* s;
	BOOL activated;
	UINT32 frame_id;
	BOOL audin_open;
	RFX_CONTEXT* rfx_context;
	NSC_CONTEXT* nsc_context;
	WTSVirtualChannelManager* vcm;
	audin_server_context* audin;
	rdpsnd_server_context* rdpsnd;
};
typedef struct mf_peer_context mfPeerContext;

#endif /* MFREERDP_SERVER_H */
