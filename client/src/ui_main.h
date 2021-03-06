/* $Id: ui_main.h,v 1.1 2005/05/23 02:59:57 smoli Exp $
 * -------------------------------------------------------------------------- *
 *  .___.    .                                                                *
 *    |  * _.|_ . .        Portabler, SDL-basierender Client f�r das          *
 *    |  |(_.[ )(_|             Multiplayer-Kartenspiel Tichu.                *
 *  . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . *
 *                                                                            *
 *               (c) 2004-2005 by Martin Zangger, Roman Senn                  *
 *                                                                            *
 *    Dieses Programm ist freie Software. Sie k�nnen es unter den Bedingungen *
 * der GNU General Public License, wie von der Free Software Foundation ver-  *
 * �ffentlicht, weitergeben und/oder modifizieren, entweder gem�ss Version 2  *
 * der Lizenz oder (nach Ihrer Option) jeder sp�teren Version.                *
 *                                                                            *
 *    Die Ver�ffentlichung dieses Programms erfolgt in der Hoffnung, dass es  *
 * Ihnen von Nutzen sein wird, aber OHNE IRGENDEINE GARANTIE, sogar ohne die  *
 * implizite Garantie der MARKTREIFE oder der VERWENDBARKEIT F�R EINEN BE-    *
 * STIMMTEN ZWECK. Details finden Sie in der GNU General Public License.      *
 *                                                                            *
 *    Sie sollten eine Kopie der GNU General Public License zusammen mit      *
 * diesem Programm erhalten haben. Falls nicht, schreiben Sie an die Free     *
 * Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA          *
 * 02111-1307, USA.                                                           *
 * -------------------------------------------------------------------------- */

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <libsgui/sgui.h>

/* -------------------------------------------------------------------------- *
 * Das UI-Main Modul stellt das Hauptmen� dar                                 *
 * -------------------------------------------------------------------------- */
#include "ui.h"

/* -------------------------------------------------------------------------- *
 * Men� Objekte                                                               *
 * -------------------------------------------------------------------------- */
extern sgWidget *ui_main_dialog;
extern sgWidget *ui_main_logo;
extern sgWidget *ui_main_group;
extern sgWidget *ui_main_play;
extern sgWidget *ui_main_test;
extern sgWidget *ui_main_config;
extern sgWidget *ui_main_exit;

/* -------------------------------------------------------------------------- *
 * Funktionen                                                                 *
 * -------------------------------------------------------------------------- */
int              ui_main_proc (sgWidget    *widget, 
                               sgEvent      event);
int              ui_main      (SDL_Surface *screen);

#endif /* UI_MAIN_H */
