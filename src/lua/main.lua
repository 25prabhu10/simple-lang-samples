local function collatz(seed)
	local steps = 0
	while seed > 1 do
		while seed % 2 == 0 do
			steps = steps + 1
			seed = seed / 2
		end
		if seed > 1 then
			steps = steps + 1
			seed = seed * 3 + 1
		end
	end
end

local function main()
	for seed = 1, 1000000000, 1 do
		collatz(seed)
	end
end

main()
