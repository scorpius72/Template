#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;

template <typename T>  using oset =
    tree<T, null_type, less<T>,
    rb_tree_tag, tree_order_statistics_node_update>;

#define odrkey order_of_key // number of items strickly smaller than k
#define fbodr find_by_order