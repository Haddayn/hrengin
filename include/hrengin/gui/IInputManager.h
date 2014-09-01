#ifndef _hrengin_IInputManager_
#define _hrengin_IInputManager_

#include <hrengin/common/types.h>
#include <hrengin/common/api.h>
#include <hrengin/game/IControllable.h>

#include <hrengin/gui/InputEvent.h>

namespace hrengin {
class IUserInputReceiver;
namespace gui {
//class IRayPicker;

class IInputManager {
public:
	virtual bool registerReceiver(IUserInputReceiver* receiver) = 0;
	virtual bool unregisterReceiver(IUserInputReceiver* receiver) = 0;

	//don't see the need in this
	//virtual u32 AddMouseEvent(u32 Event, OnInputCallback callback) = 0;
};

} // namespace io
} // namespace hrengin

#endif//_hrengin_IInputManager_
