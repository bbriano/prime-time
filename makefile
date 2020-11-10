SOLUTIONS = naive sqrt primediv

default: $(SOLUTIONS)

%: %.c
	$(CC) $^ -o $@

clean:
	$(RM) $(SOLUTIONS)
