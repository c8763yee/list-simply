struct list_head {
	struct list_head *prev, *next;
};

typedef struct value {
	int val;
	struct list_head list;
} value_t;

#define LIST_HEAD(name) { &name, &name }
#define LIST_HEAD_INIT(name) struct list_head name = LIST_HEAD(name)

static inline void list_add(struct list_head *node, struct list_head *head)
{
	struct list_head *next = head->next;
	node->next = next;
	node->prev = head;
	head->next = node;
	next->prev = node;
}

