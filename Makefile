.PHONY: clean All

All:
	@echo "==========Building project:[ Section5C2Challenge - Debug ]=========="
	@cd "Section5C2Challenge" && "$(MAKE)" -f  "Section5C2Challenge.mk"
clean:
	@echo "==========Cleaning project:[ Section5C2Challenge - Debug ]----------"
	@cd "Section5C2Challenge" && "$(MAKE)" -f  "Section5C2Challenge.mk" clean
