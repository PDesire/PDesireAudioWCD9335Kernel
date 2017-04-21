/*
 * Access vector cache interface for the security server.
 *
 * Author : Stephen Smalley, <sds@epoch.ncsc.mil>
 */
<<<<<<< HEAD
/*
 * NOTE: This file has been modified by Sony Mobile Communications Inc.
 * Modifications are Copyright (c) 2014 Sony Mobile Communications Inc,
 * and licensed under the license of the file.
 */
=======
>>>>>>> 132f55c417fd9d9f65c56927b69313b211be9353
#ifndef _SELINUX_AVC_SS_H_
#define _SELINUX_AVC_SS_H_

#include "flask.h"

int avc_ss_reset(u32 seqno);

/* Class/perm mapping support */
struct security_class_mapping {
	const char *name;
	const char *perms[sizeof(u32) * 8 + 1];
};

extern struct security_class_mapping secclass_map[];
<<<<<<< HEAD
#ifdef CONFIG_SECURITY_SELINUX_TRAP
extern const int secclass_map_size;
#endif
=======

>>>>>>> 132f55c417fd9d9f65c56927b69313b211be9353
/*
 * The security server must be initialized before
 * any labeling or access decisions can be provided.
 */
extern int ss_initialized;

#endif /* _SELINUX_AVC_SS_H_ */

