//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include "../../BeastConfig.h"

#include <ripple_app/ripple_app.h>

#include <ripple/common/seconds_clock.h>

#include <ripple_app/shamap/SHAMap.cpp> // Uses theApp
#include <ripple_app/shamap/SHAMapItem.cpp>
#include <ripple_app/shamap/SHAMapSync.cpp>
#include <ripple_app/shamap/SHAMapMissingNode.cpp>

#include <ripple_app/misc/AccountItem.cpp>
#include <ripple_app/misc/CanonicalTXSet.cpp>
#include <ripple_app/ledger/LedgerProposal.cpp>
#include <ripple_app/main/LoadManager.cpp>
#include <ripple_app/misc/NicknameState.cpp>
#include <ripple_app/ledger/OrderBookDB.cpp>

#include <ripple_app/data/Database.cpp>
#include <ripple_app/data/DatabaseCon.cpp>
#include <ripple_app/data/SqliteDatabase.cpp>
#include <ripple_app/data/DBInit.cpp>

#include <ripple_app/shamap/RadixMapTest.h>
#include <ripple_app/shamap/RadixMapTest.cpp>
#include <ripple_app/shamap/FetchPackTests.cpp>