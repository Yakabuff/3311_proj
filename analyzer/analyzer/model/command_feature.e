note
	description: "Summary description for {COMMAND_FEATURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_FEATURE

inherit
	ROUTINE_FEATURE

create
	make

feature -- constructor
	make (f_name : STRING; ps : ARRAY[TUPLE[pn: STRING; ft: STRING]])
		do

			name := f_name
			create curr_expr.make_empty -- used for assignment_instruction
			num_of_param := ps.count
			param := ps
	end

feature -- commands
	set_expr (s : STRING)
		do
			curr_expr := s
		end

feature -- queries
	get_expr : STRING
		do
			Result := curr_expr
		end
feature -- attributes
	curr_expr : STRING
	num_of_param : INTEGER
end
