/****************************************************************************
 *  Various database maintenance commands
 *  Author:  Bill Forster
 *  License: MIT license. Full text of license is in associated file LICENSE
 *  Copyright 2010-2014, Bill Forster <billforsternz at gmail dot com>
 ****************************************************************************/
#ifndef DB_MAINTENANCE_H
#define DB_MAINTENANCE_H

void db_maintenance_create_player_database();
void db_maintenance_compress_pgn();
void db_maintenance_decompress_pgn();
void db_maintenance_verify_compression();
void db_maintenance_create_or_append_to_database( const char *db_filename, const char *pgn_filename );
void db_maintenance_create_indexes( const char *db_filename );

#endif // DB_MAINTENANCE_H
