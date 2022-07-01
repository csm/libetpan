/*
 * libEtPan! -- a mail stuff library
 *
 * Copyright (C) 2001, 2014 - DINH Viet Hoa
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the libEtPan! project nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#ifndef NEWSFEED_ITEM_ENCLOSURE_H

#define NEWSFEED_ITEM_ENCLOSURE_H

#ifdef XCODE_FRAMEWORK_BUILD
# include "newsfeed_types.h"
#else
# include <libetpan/newsfeed_types.h>
#endif

struct newsfeed_item_enclosure * newsfeed_item_enclosure_new(void);
void newsfeed_item_enclosure_free(struct newsfeed_item_enclosure * enclosure);

char * newsfeed_item_enclosure_get_url(struct newsfeed_item_enclosure * enclosure);
int newsfeed_item_enclosure_set_url(struct newsfeed_item_enclosure * enclosure,
    const char * url);

char * newsfeed_item_enclosure_get_type(struct newsfeed_item_enclosure * enclosure);
int newsfeed_item_enclosure_set_type(struct newsfeed_item_enclosure * enclosure,
    const char * type);

size_t newsfeed_item_enclosure_get_size(struct newsfeed_item_enclosure * enclosure);
void newsfeed_item_enclosure_set_size(struct newsfeed_item_enclosure * enclosure,
    size_t size);

#endif
