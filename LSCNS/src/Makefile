APP := lscns
SUBDIRS = app watchdog itemmgr datastore

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done
	@g++ -o $(APP) ./bin/*.o

clean:
	rm -f ./bin/*.o
	rm -f ./lncns
