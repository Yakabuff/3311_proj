note
	description: "Summary description for {ADDITION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ADDITION

inherit -- multiple inheritance

	BINARY_OP

create
	make

feature -- Queries
	left: EXPRESSION
		do
			Result := children[1]
		end

	right: EXPRESSION
 		do
 			Result := children[2]
 		end

feature -- Constructors
	make (l, r: EXPRESSION)
		do
			create children.make
			children.extend (l)
			children.extend (r)
		end

feature -- Visitors
	accept (v: VISITOR)
			-- The current addition accepts a kind of visitor 'v'.
			-- The dynamic type of 'v' will determine the type of
			-- operation to be performed on the current addition object.
		do
			v.visit_addition (Current)
		end

feature -- command from Expression
	set_expr
		do
			
		end
invariant
	binary_operation: children.count = 2

end
