#pragma once

#include "ofxCvGui2/src/ofxCvGui/Panels/Base.h"

#include "Node.h"
#include "Link.h"

namespace ofxGraphEdit {
	class Canvas : public ofxCvGui::Panels::Base {
	public:
		Canvas(bool validateOnUpdate = true);
	protected:
		bool validateOnUpdate;
		NodeIndex nodeSelection;
		LinkIndex linkSelection;
	};
}