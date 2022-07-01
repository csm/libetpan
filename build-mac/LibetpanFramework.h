//
//  LibetpanFramework.h
//  libetpan
//
//  Created by Casey Marshall on 6/29/22.
//

#ifndef Libetpan_h
#define Libetpan_h

#include "libetpan_version.h"
#include "maildriver.h"
#include "mailmessage.h"
#include "mailfolder.h"
#include "mailstorage.h"
#include "mailthread.h"
#include "mailsmtp.h"
#include "charconv.h"
#include "mailsem.h"
#include "carray.h"
#include "chash.h"
#include "maillock.h"
  
/* mbox driver */
#include "mboxdriver.h"
#include "mboxdriver_message.h"
#include "mboxdriver_cached.h"
#include "mboxdriver_cached_message.h"
#include "mboxstorage.h"

/* MH driver */
#include "mhdriver.h"
#include "mhdriver_message.h"
#include "mhdriver_cached.h"
#include "mhdriver_cached_message.h"
#include "mhstorage.h"

/* IMAP4rev1 driver */
#include "imapdriver.h"
#include "imapdriver_message.h"
#include "imapdriver_cached.h"
#include "imapdriver_cached_message.h"
#include "imapstorage.h"

/* POP3 driver */
#include "pop3driver.h"
#include "pop3driver_message.h"
#include "pop3driver_cached.h"
#include "pop3driver_cached_message.h"
#include "pop3storage.h"

/* Hotmail */
#include "hotmailstorage.h"

/* NNTP driver */
#include "nntpdriver.h"
#include "nntpdriver_message.h"
#include "nntpdriver_cached.h"
#include "nntpdriver_cached_message.h"
#include "nntpstorage.h"

/* maildir driver */
#include "maildirdriver.h"
#include "maildirdriver_message.h"
#include "maildirdriver_cached.h"
#include "maildirdriver_cached_message.h"
#include "maildirstorage.h"

/* db driver */
#include "dbdriver.h"
#include "dbdriver_message.h"
#include "dbstorage.h"

/* feed driver */
#include "feeddriver.h"
#include "feeddriver_message.h"
#include "feedstorage.h"

/* message which content is given by a MIME structure */
#include "mime_message_driver.h"

/* message which content given by a string */
#include "data_message_driver.h"

/* engine */
#include "mailprivacy.h"
#include "mailengine.h"
#include "mailprivacy_gnupg.h"
#include "mailprivacy_smime.h"

#endif /* Libetpan_h */
