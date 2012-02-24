/*

  module-formats.h

  Author: Pekka Riikonen <priikone@silcnet.org>

  Copyright (C) 2001 - 2003, 2007 Pekka Riikonen

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

*/

#include "fe-common/core/formats.h"

enum {
  SILCTXT_MODULE_NAME,

  SILCTXT_FILL_1,

  SILCTXT_CHANNEL_FOUNDER_YOU,
  SILCTXT_CHANNEL_FOUNDER,
  SILCTXT_CHANNEL_TOPIC,
  SILCTXT_CHANNEL_TOPIC_NOT_SET,
  SILCTXT_CHANNEL_CMODE,
  SILCTXT_CHANNEL_CUMODE,
  SILCTXT_CHANNEL_INVITEBAN_LIST,
  SILCTXT_CHANNEL_INVITEBAN_STRING,
  SILCTXT_CHANNEL_INVITEBAN_PUBKEY,
  SILCTXT_CHANNEL_INVITEBAN_REGET,
  SILCTXT_CHANNEL_NO_INVITEBAN_LIST,
  SILCTXT_CHANNEL_INVITING,
  SILCTXT_CHANNEL_KICKED_YOU,
  SILCTXT_CHANNEL_KICKED,
  SILCTXT_CHANNEL_KILLED_YOU,
  SILCTXT_CHANNEL_KILLED,
  SILCTXT_CHANNEL_QUIETED,
  SILCTXT_CHANNEL_APPEARS,
  SILCTXT_PUBMSG_HILIGHT_SIGNED,
  SILCTXT_PUBMSG_HILIGHT_UNKNOWN,
  SILCTXT_PUBMSG_HILIGHT_FAILED,
  SILCTXT_PUBMSG_ME_SIGNED,
  SILCTXT_PUBMSG_ME_UNKNOWN,
  SILCTXT_PUBMSG_ME_FAILED,
  SILCTXT_PUBMSG_SIGNED,
  SILCTXT_PUBMSG_UNKNOWN,
  SILCTXT_PUBMSG_FAILED,
  SILCTXT_PUBMSG_HILIGHT_CHANNEL_SIGNED,
  SILCTXT_PUBMSG_HILIGHT_CHANNEL_UNKNOWN,
  SILCTXT_PUBMSG_HILIGHT_CHANNEL_FAILED,
  SILCTXT_PUBMSG_ME_CHANNEL_SIGNED,
  SILCTXT_PUBMSG_ME_CHANNEL_UNKNOWN,
  SILCTXT_PUBMSG_ME_CHANNEL_FAILED,
  SILCTXT_PUBMSG_CHANNEL_SIGNED,
  SILCTXT_PUBMSG_CHANNEL_UNKNOWN,
  SILCTXT_PUBMSG_CHANNEL_FAILED,
  SILCTXT_MSG_PRIVATE_SIGNED,
  SILCTXT_MSG_PRIVATE_UNKNOWN,
  SILCTXT_MSG_PRIVATE_FAILED,
  SILCTXT_MSG_PRIVATE_QUERY_SIGNED,
  SILCTXT_MSG_PRIVATE_QUERY_UNKNOWN,
  SILCTXT_MSG_PRIVATE_QUERY_FAILED,
  SILCTXT_OWN_MSG_SIGNED,
  SILCTXT_OWN_MSG_CHANNEL_SIGNED,
  SILCTXT_NO_MSGS_GOT,
  SILCTXT_NO_MSGS_SENT,
  SILCTXT_OWN_MSG_PRIVATE_SIGNED,
  SILCTXT_OWN_MSG_PRIVATE_QUERY_SIGNED,
  SILCTXT_CHANNEL_PK_LIST,
  SILCTXT_CHANNEL_PK_LIST_ENTRY,
  SILCTXT_CHANNEL_PK_NO_LIST,
  SILCTXT_OWN_ACTION,
  SILCTXT_OWN_ACTION_SIGNED,
  SILCTXT_OWN_ACTION_TARGET,
  SILCTXT_OWN_ACTION_TARGET_SIGNED,
  SILCTXT_ACTION_PUBLIC,
  SILCTXT_ACTION_PUBLIC_SIGNED,
  SILCTXT_ACTION_PUBLIC_UNKNOWN,
  SILCTXT_ACTION_PUBLIC_FAILED,
  SILCTXT_ACTION_PUBLIC_CHANNEL,
  SILCTXT_ACTION_PUBLIC_CHANNEL_SIGNED,
  SILCTXT_ACTION_PUBLIC_CHANNEL_UNKNOWN,
  SILCTXT_ACTION_PUBLIC_CHANNEL_FAILED,
  SILCTXT_ACTION_PRIVATE,
  SILCTXT_ACTION_PRIVATE_SIGNED,
  SILCTXT_ACTION_PRIVATE_UNKNOWN,
  SILCTXT_ACTION_PRIVATE_FAILED,
  SILCTXT_ACTION_PRIVATE_QUERY,
  SILCTXT_ACTION_PRIVATE_QUERY_SIGNED,
  SILCTXT_ACTION_PRIVATE_QUERY_UNKNOWN,
  SILCTXT_ACTION_PRIVATE_QUERY_FAILED,
  SILCTXT_OWN_NOTICE,
  SILCTXT_OWN_NOTICE_SIGNED,
  SILCTXT_NOTICE_PUBLIC,
  SILCTXT_NOTICE_PUBLIC_SIGNED,
  SILCTXT_NOTICE_PUBLIC_UNKNOWN,
  SILCTXT_NOTICE_PUBLIC_FAILED,
  SILCTXT_NOTICE_PRIVATE,
  SILCTXT_NOTICE_PRIVATE_SIGNED,
  SILCTXT_NOTICE_PRIVATE_UNKNOWN,
  SILCTXT_NOTICE_PRIVATE_FAILED,
  SILCTXT_CHANNEL_MANY_NICKS,
  SILCTXT_CHANNEL_USER_APPEARS,

  SILCTXT_FILL_2,

  SILCTXT_WHOIS_USERINFO,
  SILCTXT_WHOIS_REALNAME,
  SILCTXT_WHOIS_CHANNELS,
  SILCTXT_WHOIS_MODES,
  SILCTXT_WHOIS_IDLE,
  SILCTXT_WHOIS_FINGERPRINT,
  SILCTXT_WHOWAS_USERINFO,
  SILCTXT_USERS_HEADER,
  SILCTXT_USERS,

  SILCTXT_FILL_3,

  SILCTXT_CH_PRIVATE_KEY_ADD,
  SILCTXT_CH_PRIVATE_KEY_NOMODE,
  SILCTXT_CH_PRIVATE_KEY_ERROR,
  SILCTXT_CH_PRIVATE_KEY_LIST,
  SILCTXT_CH_PRIVATE_KEY_CHANGE,
  SILCTXT_PRIVATE_KEY_LIST,
  SILCTXT_PRIVATE_KEY_LIST_NICK,
  SILCTXT_KEY_AGREEMENT,
  SILCTXT_KEY_AGREEMENT_REQUEST,
  SILCTXT_KEY_AGREEMENT_REQUEST_HOST,
  SILCTXT_KEY_AGREEMENT_NEGOTIATE,
  SILCTXT_KEY_AGREEMENT_PRIVMSG,
  SILCTXT_KEY_AGREEMENT_OK,
  SILCTXT_KEY_AGREEMENT_ERROR,
  SILCTXT_KEY_AGREEMENT_FAILURE,
  SILCTXT_KEY_AGREEMENT_TIMEOUT,
  SILCTXT_KEY_AGREEMENT_ABORTED,
  SILCTXT_KEY_AGREEMENT_ALREADY_STARTED,
  SILCTXT_KEY_AGREEMENT_SELF_DENIED,
  SILCTXT_PUBKEY_RECEIVED,
  SILCTXT_PUBKEY_RECEIVED_CLIENT,
  SILCTXT_PUBKEY_FINGERPRINT,
  SILCTXT_PUBKEY_BABBLEPRINT,
  SILCTXT_PUBKEY_UNSUPPORTED,
  SILCTXT_PUBKEY_DISCARD,
  SILCTXT_PUBKEY_ACCEPT,
  SILCTXT_PUBKEY_ACCEPT_ANYWAY,
  SILCTXT_PUBKEY_COULD_NOT_LOAD,
  SILCTXT_PUBKEY_MALFORMED,
  SILCTXT_PUBKEY_NO_MATCH,
  SILCTXT_PUBKEY_MAYBE_EXPIRED,
  SILCTXT_PUBKEY_MITM_ATTACK,
  SILCTXT_PUBKEY_NOKEY,
  SILCTXT_PUBKEY_VERIFIED,
  SILCTXT_PUBKEY_VERIFIED_CLIENT,
  SILCTXT_PUBKEY_NOTVERIFIED,

  SILCTXT_FILL_4,

  SILCTXT_SERVER_OPER,
  SILCTXT_ROUTER_OPER,
  SILCTXT_LIST_HEADER,
  SILCTXT_LIST,
  SILCTXT_BAD_NICK,
  SILCTXT_UNKNOWN_NOTIFY,
  SILCTXT_KE_BAD_VERSION,
  SILCTXT_KE_UNSUPPORTED_PUBLIC_KEY,
  SILCTXT_KE_UNKNOWN_GROUP,
  SILCTXT_KE_UNKNOWN_CIPHER,
  SILCTXT_KE_UNKNOWN_PKCS,
  SILCTXT_KE_UNKNOWN_HASH_FUNCTION,
  SILCTXT_KE_UNKNOWN_HMAC,
  SILCTXT_KE_INCORRECT_SIGNATURE,
  SILCTXT_KE_INVALID_COOKIE,
  SILCTXT_AUTH_FAILED,
  SILCTXT_SET_AWAY,
  SILCTXT_UNSET_AWAY,
  SILCTXT_AUTH_METH_UNRESOLVED,
  SILCTXT_WATCH_PRESENT,
  SILCTXT_WATCH_SIGNOFF,
  SILCTXT_WATCH_KILLED,
  SILCTXT_WATCH_UMODE_CHANGE,
  SILCTXT_WATCH_NICK_CHANGE,
  SILCTXT_MESSAGE_DATA,
  SILCTXT_STATS,
  SILCTXT_REATTACH,
  SILCTXT_REATTACH_FAILED,

  SILCTXT_FILL_5,

  SILCTXT_FILE_SEND,
  SILCTXT_FILE_TRANSMIT,
  SILCTXT_FILE_TRANSMITTED,
  SILCTXT_FILE_RECEIVE,
  SILCTXT_FILE_RECEIVED,
  SILCTXT_FILE_REQUEST,
  SILCTXT_FILE_REQUEST_HOST,
  SILCTXT_FILE_KEY_EXCHANGE,
  SILCTXT_FILE_NA,
  SILCTXT_FILE_CLIENT_NA,
  SILCTXT_FILE_SHOW_HEADER,
  SILCTXT_FILE_SHOW_LINE,
  SILCTXT_FILE_ALREADY_STARTED,
  SILCTXT_FILE_ERROR,
  SILCTXT_FILE_ERROR_NO_SUCH_FILE,
  SILCTXT_FILE_ERROR_PERMISSION_DENIED,
  SILCTXT_FILE_CLOSED,

  SILCTXT_FILL_6,

  SILCTXT_ATTR_HEADER,
  SILCTXT_ATTR_FOOTER,
  SILCTXT_ATTR_ALLOW,
  SILCTXT_ATTR_VCARD_FILE,
  SILCTXT_ATTR_SERVICES,
  SILCTXT_ATTR_SERVICE,
  SILCTXT_ATTR_STATUS_MOOD,
  SILCTXT_ATTR_STATUS_TEXT,
  SILCTXT_ATTR_STATUS_MESSAGE,
  SILCTXT_ATTR_STATUS_MESSAGE_FILE,
  SILCTXT_ATTR_PREFERRED_LANGUAGE,
  SILCTXT_ATTR_PREFERRED_CONTACT,
  SILCTXT_ATTR_GEOLOCATION,
  SILCTXT_ATTR_DEVICE_INFO,
  SILCTXT_ATTR_PUBLIC_KEYS,
  SILCTXT_ATTR_TIMEZONE,
  SILCTXT_ATTR_TIMEZONE_ALLOW,
  SILCTXT_ATTR_USER_SIGN_VERIFIED,
  SILCTXT_ATTR_USER_SIGN_FAILED,
  SILCTXT_ATTR_USER_SIGN_NOT_PRESENT,
  SILCTXT_ATTR_SERVER_SIGN_VERIFIED,
  SILCTXT_ATTR_SERVER_SIGN_FAILED,
  SILCTXT_ATTR_EXTENSION,
  SILCTXT_ATTR_SAVE,
  SILCTXT_ATTR_SAVED,

  SILCTXT_FILL_7,

  SILCTXT_LISTKEY_PUB_FILE,
  SILCTXT_LISTKEY_PUB_ALG,
  SILCTXT_LISTKEY_PUB_VER,
  SILCTXT_LISTKEY_PUB_BITS,
  SILCTXT_LISTKEY_PUB_RN,
  SILCTXT_LISTKEY_PUB_UN,
  SILCTXT_LISTKEY_PUB_HN,
  SILCTXT_LISTKEY_PUB_EMAIL,
  SILCTXT_LISTKEY_PUB_ORG,
  SILCTXT_LISTKEY_PUB_C,
  SILCTXT_LISTKEY_PUB_FINGER,
  SILCTXT_LISTKEY_PUB_BABL,
  SILCTXT_LISTKEY_LOADPUB,
  SILCTXT_LISTKEY_LIST,

  SILCTXT_FILL_8,

  SILCTXT_SILCNET_ADDED,
  SILCTXT_SILCNET_REMOVED,
  SILCTXT_SILCNET_NOT_FOUND,
  SILCTXT_SILCNET_HEADER,
  SILCTXT_SILCNET_LINE,
  SILCTXT_SILCNET_FOOTER,

#ifdef SILC_PLUGIN
  SILCTXT_FILL_9,

  SILCTXT_CONFIG_DEBUG,
  SILCTXT_CONFIG_NODEBUG,
  SILCTXT_CONFIG_UNKNOWN,
  SILCTXT_CONFIG_LIST,
  SILCTXT_CONFIG_ALGOS,
  SILCTXT_CONFIG_NEXTTIME,
  SILCTXT_CONFIG_PASS_ASK1,
  SILCTXT_CONFIG_PASS_ASK2,
  SILCTXT_CONFIG_PASS_ASK3,
  SILCTXT_CONFIG_PASSMISMATCH,
  SILCTXT_CONFIG_PASSCHANGE,
  SILCTXT_CONFIG_PASSCHANGE_FAIL,
  SILCTXT_CONFIG_CREATE,
  SILCTXT_CONFIG_CREATE_FAIL,
#endif

};

extern FORMAT_REC fecommon_silc_formats[];
