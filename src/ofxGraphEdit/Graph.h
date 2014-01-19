#pragma once

namespace ofxGraphEdit {
	class Graph {
	public:
		enum Type {
			Unidirectional,
			Directional
		};

		Graph(Type);

		void validateGraph();
		void validateLinks();

		Type getType();
	protected:
		Type type;
		
	};
};