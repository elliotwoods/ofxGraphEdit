#pragma once

namespace ofxGraphEdit {
	class Link {
	public:
		void draw();
		void setSource(shared_ptr<Node>);
		void setTarget(shared_ptr<Node>);
	protected:
	};
	
	typedef long int LinkIndex;
}