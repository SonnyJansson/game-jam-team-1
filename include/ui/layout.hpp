#ifndef _UI_LAYOUT_
#define _UI_LAYOUT_

#include <SDL_rect.h>

const SDL_Rect LAYOUT_BACKGROUND{0, 0, 384, 216};

const SDL_Rect LAYOUT_COMPUTER_LOG{28, 24, 160, 128};
const SDL_Rect LAYOUT_COMPUTER_INPUT{28, 160, 160, 32};

const SDL_Point LAYOUT_DIARY_HIDDEN_TOP_LEFT{-184, 12};
const SDL_Point LAYOUT_DIARY_REVEALED_TOP_LEFT{12, 12};

const std::pair<int, int> LAYOUT_DIARY_DIMS{192, 192};

const SDL_Rect LAYOUT_DIARY_LOG_RELATIVE{16, 12, 160, 128};
const SDL_Rect LAYOUT_DIARY_INPUT_RELATIVE{16, 148, 160, 32};

const SDL_Rect LAYOUT_INVENTORY_CONTENTS{268, 16, 88, 56};

const SDL_Rect LAYOUT_MAP{264, 108, 96, 96};


const int MAX_ITEMS_IN_ROW = 5;

const int LOG_MESSAGE_SPACING = 20;

#endif // _UI_LAYOUT_