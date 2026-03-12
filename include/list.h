struct list_head {
	struct list_head *prev, *next;
};

typedef struct {
	int value;
	struct list_head lst;
} value_t;

#define LIST_HEAD(name) { &name, &name }

#define INIT_LIST_HEAD(name) struct list_head name = LIST_HEAD(name);
