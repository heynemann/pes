clean:
	@find . -name '*.o' -delete
	@find . -name 'solution' -delete

run: clean
	@echo '----------------------------------------'
	@echo '        Running Problem number ${p}'
	@echo '----------------------------------------'
	@echo
	@gcc problem${p}/solution.c -o problem${p}/solution && time problem${p}/solution
