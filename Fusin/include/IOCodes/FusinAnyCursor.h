#ifndef _FUSIN_CURSOR_H
#define _FUSIN_CURSOR_H

#include "IOCodes/FusinIOCode.h"
#include <vector>

namespace Fusin
{
	const IOCode ANY_CURSOR_POSITION_X = IOCode(DT_COMPONENT_CURSOR, IO_POSITION, 0);
	const IOCode ANY_CURSOR_POSITION_Y = IOCode(DT_COMPONENT_CURSOR, IO_POSITION, 1);
	const IOCode ANY_CURSOR_MOVE_X = IOCode(DT_COMPONENT_CURSOR, IO_MOVEMENT, 0);
	const IOCode ANY_CURSOR_MOVE_Y = IOCode(DT_COMPONENT_CURSOR, IO_MOVEMENT, 1);
	const IOCode ANY_CURSOR_MOVE_LEFT  = ANY_CURSOR_MOVE_X.negativeVersion();
	const IOCode ANY_CURSOR_MOVE_RIGHT = ANY_CURSOR_MOVE_X.positiveVersion();
	const IOCode ANY_CURSOR_MOVE_UP    = ANY_CURSOR_MOVE_Y.negativeVersion();
	const IOCode ANY_CURSOR_MOVE_DOWN  = ANY_CURSOR_MOVE_Y.positiveVersion();

	const std::vector<String> CURSOR_MOVEMENT_NAMES = {
		FUSIN_STR("Move_X"), FUSIN_STR("Move_Y")
	};

}

#endif