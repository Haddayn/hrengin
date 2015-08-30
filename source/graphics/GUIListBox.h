/*
 * Copyright (C) 2014  absurdworlds
 *
 * License LGPLv3-only:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _awrts_GUIListBox_
#define _awrts_GUIListBox_

#include <awrts/gui/GUIListBox.h>

namespace irr {
namespace gui {
class GUIListBox;
}
}

namespace awrts {
namespace gui {

class GUIListBox : public GUIListBox {
public:
	GUIListBox(irr::gui::IGUIListBox* elem);
	virtual ~GUIListBox();

	virtual u32 getId() const;
	virtual u32 getParentId() const;

	virtual u32 addItem(std::string text);

	virtual std::string getText() const;
	virtual void setText(std::string text);

	virtual void* getUnderlyingElement() const
	{
		return (void*) irrElement_;
	}

private:
	void adjustScrollPosition();

	irr::gui::IGUIListBox* irrElement_;
};

} // namespace gui
} // namespace awrts
#endif //_awrts_GUIListBox_
