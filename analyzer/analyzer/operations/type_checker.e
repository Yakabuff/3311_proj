note
	description: "Summary description for {TYPE_CHECKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit
	VISITOR

feature -- visitor implementation
	visit_constant (c : INTEGER_CONSTANT)
		do

		end

	visit_addition ( a : ADDITION)
		do

		end

	visit_subtraction (s : SUBTRACTION)
		do

		end

	visit_multiplication ( m : MULTIPLICATION)
		do

		end

	visit_quotient (q: QUOTIENT)
		do

		end
		
	visit_modulo ( mod : MODULO)
		do

		end

	visit_boolean ( b : BOOLEAN_CONSTANT)
		do

		end
end