#ifndef BOT_PLAYER_H
#define BOT_PLAYER_H

#include "bot.h"

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
struct player {
  struct node      node;        /* node f�r die globale game list */
  uint32_t         serial;
  uint32_t         refcount;
  uint32_t         hash;        /* game name hash */
  char             name[BOT_USERLEN + 1];
  struct player   *game;
  struct list      cards;
  int              team;
  int              accepted;
};

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern int            player_log;
extern struct sheap   player_heap;
extern struct list    player_list;
extern uint32_t       player_serial;

/* -------------------------------------------------------------------------- *
 * Initialize game heap and add garbage collect timer.                        * 
 * -------------------------------------------------------------------------- */
extern void           player_init         (void);

/* -------------------------------------------------------------------------- *
 * Destroy game heap and cancel timer.                                        *
 * -------------------------------------------------------------------------- */
extern void           player_shutdown     (void);

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern void           player_clear        (void);
  
/* -------------------------------------------------------------------------- *
 * Create a game.                                                             *
 * -------------------------------------------------------------------------- */
extern struct player *player_new          (const char    *name,
                                           int            team,
                                           int            accepted);

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern void           player_update       (struct player *game,
                                           int            team, 
                                           int            accepted);
  
/* -------------------------------------------------------------------------- *
 * Delete a game.                                                             *
 * -------------------------------------------------------------------------- */
extern void           player_delete       (struct player *gptr);

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern void           player_schupf       (struct player *from, 
                                           struct player *to, 
                                           int            mode);

/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern void           player_playcards    (struct player *player, 
                                           struct list   *cards);
  
/* -------------------------------------------------------------------------- *
 * -------------------------------------------------------------------------- */
extern void           player_sendcards    (void);
  
/* -------------------------------------------------------------------------- *
 * Loose all references of a game block.                                      *
 * -------------------------------------------------------------------------- */
extern void           player_release      (struct player *gptr);

/* -------------------------------------------------------------------------- *
 * Find a player by name.                                                     *
 * -------------------------------------------------------------------------- */
extern struct player *player_find_name    (const char    *name);

/* -------------------------------------------------------------------------- *
 * Get a reference to an game block                                           *
 * -------------------------------------------------------------------------- */
extern struct player *player_pop          (struct player *gptr);  

/* -------------------------------------------------------------------------- *
 * Push back a reference to a game block                                      *
 * -------------------------------------------------------------------------- */
extern struct player *player_push         (struct player**gptrptr);  

/* -------------------------------------------------------------------------- *
 * Dump games and game heap.                                                  *
 * -------------------------------------------------------------------------- */
extern void           player_dump         (struct player *game);

#endif /* BOT_PLAYER_H */
    
