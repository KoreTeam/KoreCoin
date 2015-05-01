/* Copyright (c) 2014, KoreCoin 2.0 Developers */
/* See LICENSE for licensing information */

/**
 * \file korecoin.h
 * \brief Headers for korecoin.cpp
 **/

#ifndef TOR_KORECOIN_H
#define TOR_KORECOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* korecoin_tor_data_directory(
    );

    char const* korecoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

