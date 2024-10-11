/* THIS FILE IS GENERATED BY unicode_ranges.pl */

#include "bsearch.h"
#include <stdint.h>
#include <stdbool.h>

struct TSPRange { int32_t start; int32_t end; };
static int tsprange_contains (const void * a, const void * b) {
  struct TSPRange * range = (struct TSPRange*)b;
  int32_t key = *(int32_t*)a;
  if (key < range->start)
    return -1;
  if (key >= range->end)
    return 1;
  return 0;
}

static const struct TSPRange tsp_id_start[] = {
  { 65, 91 },
  { 97, 123 },
  { 192, 215 },
  { 216, 247 },
  { 248, 706 },
  { 710, 722 },
  { 736, 741 },
  { 880, 885 },
  { 886, 888 },
  { 891, 894 },
  { 904, 907 },
  { 910, 930 },
  { 931, 1014 },
  { 1015, 1154 },
  { 1162, 1328 },
  { 1329, 1367 },
  { 1376, 1417 },
  { 1488, 1515 },
  { 1519, 1523 },
  { 1568, 1611 },
  { 1646, 1648 },
  { 1649, 1748 },
  { 1765, 1767 },
  { 1774, 1776 },
  { 1786, 1789 },
  { 1810, 1840 },
  { 1869, 1958 },
  { 1994, 2027 },
  { 2036, 2038 },
  { 2048, 2070 },
  { 2112, 2137 },
  { 2144, 2155 },
  { 2160, 2184 },
  { 2185, 2191 },
  { 2208, 2250 },
  { 2308, 2362 },
  { 2392, 2402 },
  { 2417, 2433 },
  { 2437, 2445 },
  { 2447, 2449 },
  { 2451, 2473 },
  { 2474, 2481 },
  { 2486, 2490 },
  { 2524, 2526 },
  { 2527, 2530 },
  { 2544, 2546 },
  { 2565, 2571 },
  { 2575, 2577 },
  { 2579, 2601 },
  { 2602, 2609 },
  { 2610, 2612 },
  { 2613, 2615 },
  { 2616, 2618 },
  { 2649, 2653 },
  { 2674, 2677 },
  { 2693, 2702 },
  { 2703, 2706 },
  { 2707, 2729 },
  { 2730, 2737 },
  { 2738, 2740 },
  { 2741, 2746 },
  { 2784, 2786 },
  { 2821, 2829 },
  { 2831, 2833 },
  { 2835, 2857 },
  { 2858, 2865 },
  { 2866, 2868 },
  { 2869, 2874 },
  { 2908, 2910 },
  { 2911, 2914 },
  { 2949, 2955 },
  { 2958, 2961 },
  { 2962, 2966 },
  { 2969, 2971 },
  { 2974, 2976 },
  { 2979, 2981 },
  { 2984, 2987 },
  { 2990, 3002 },
  { 3077, 3085 },
  { 3086, 3089 },
  { 3090, 3113 },
  { 3114, 3130 },
  { 3160, 3163 },
  { 3168, 3170 },
  { 3205, 3213 },
  { 3214, 3217 },
  { 3218, 3241 },
  { 3242, 3252 },
  { 3253, 3258 },
  { 3293, 3295 },
  { 3296, 3298 },
  { 3313, 3315 },
  { 3332, 3341 },
  { 3342, 3345 },
  { 3346, 3387 },
  { 3412, 3415 },
  { 3423, 3426 },
  { 3450, 3456 },
  { 3461, 3479 },
  { 3482, 3506 },
  { 3507, 3516 },
  { 3520, 3527 },
  { 3585, 3633 },
  { 3648, 3655 },
  { 3713, 3715 },
  { 3718, 3723 },
  { 3724, 3748 },
  { 3751, 3761 },
  { 3776, 3781 },
  { 3804, 3808 },
  { 3904, 3912 },
  { 3913, 3949 },
  { 3976, 3981 },
  { 4096, 4139 },
  { 4176, 4182 },
  { 4186, 4190 },
  { 4197, 4199 },
  { 4206, 4209 },
  { 4213, 4226 },
  { 4256, 4294 },
  { 4304, 4347 },
  { 4348, 4681 },
  { 4682, 4686 },
  { 4688, 4695 },
  { 4698, 4702 },
  { 4704, 4745 },
  { 4746, 4750 },
  { 4752, 4785 },
  { 4786, 4790 },
  { 4792, 4799 },
  { 4802, 4806 },
  { 4808, 4823 },
  { 4824, 4881 },
  { 4882, 4886 },
  { 4888, 4955 },
  { 4992, 5008 },
  { 5024, 5110 },
  { 5112, 5118 },
  { 5121, 5741 },
  { 5743, 5760 },
  { 5761, 5787 },
  { 5792, 5867 },
  { 5870, 5881 },
  { 5888, 5906 },
  { 5919, 5938 },
  { 5952, 5970 },
  { 5984, 5997 },
  { 5998, 6001 },
  { 6016, 6068 },
  { 6176, 6265 },
  { 6272, 6313 },
  { 6320, 6390 },
  { 6400, 6431 },
  { 6480, 6510 },
  { 6512, 6517 },
  { 6528, 6572 },
  { 6576, 6602 },
  { 6656, 6679 },
  { 6688, 6741 },
  { 6917, 6964 },
  { 6981, 6989 },
  { 7043, 7073 },
  { 7086, 7088 },
  { 7098, 7142 },
  { 7168, 7204 },
  { 7245, 7248 },
  { 7258, 7294 },
  { 7296, 7305 },
  { 7312, 7355 },
  { 7357, 7360 },
  { 7401, 7405 },
  { 7406, 7412 },
  { 7413, 7415 },
  { 7424, 7616 },
  { 7680, 7958 },
  { 7960, 7966 },
  { 7968, 8006 },
  { 8008, 8014 },
  { 8016, 8024 },
  { 8031, 8062 },
  { 8064, 8117 },
  { 8118, 8125 },
  { 8130, 8133 },
  { 8134, 8141 },
  { 8144, 8148 },
  { 8150, 8156 },
  { 8160, 8173 },
  { 8178, 8181 },
  { 8182, 8189 },
  { 8336, 8349 },
  { 8458, 8468 },
  { 8473, 8478 },
  { 8490, 8494 },
  { 8495, 8506 },
  { 8508, 8512 },
  { 8517, 8522 },
  { 8544, 8585 },
  { 11264, 11493 },
  { 11499, 11503 },
  { 11506, 11508 },
  { 11520, 11558 },
  { 11568, 11624 },
  { 11648, 11671 },
  { 11680, 11687 },
  { 11688, 11695 },
  { 11696, 11703 },
  { 11704, 11711 },
  { 11712, 11719 },
  { 11720, 11727 },
  { 11728, 11735 },
  { 11736, 11743 },
  { 12293, 12296 },
  { 12321, 12330 },
  { 12337, 12342 },
  { 12344, 12349 },
  { 12353, 12439 },
  { 12445, 12448 },
  { 12449, 12539 },
  { 12540, 12544 },
  { 12549, 12592 },
  { 12593, 12687 },
  { 12704, 12736 },
  { 12784, 12800 },
  { 13312, 19904 },
  { 19968, 42125 },
  { 42192, 42238 },
  { 42240, 42509 },
  { 42512, 42528 },
  { 42538, 42540 },
  { 42560, 42607 },
  { 42623, 42654 },
  { 42656, 42736 },
  { 42775, 42784 },
  { 42786, 42889 },
  { 42891, 42955 },
  { 42960, 42962 },
  { 42965, 42970 },
  { 42994, 43010 },
  { 43011, 43014 },
  { 43015, 43019 },
  { 43020, 43043 },
  { 43072, 43124 },
  { 43138, 43188 },
  { 43250, 43256 },
  { 43261, 43263 },
  { 43274, 43302 },
  { 43312, 43335 },
  { 43360, 43389 },
  { 43396, 43443 },
  { 43488, 43493 },
  { 43494, 43504 },
  { 43514, 43519 },
  { 43520, 43561 },
  { 43584, 43587 },
  { 43588, 43596 },
  { 43616, 43639 },
  { 43646, 43696 },
  { 43701, 43703 },
  { 43705, 43710 },
  { 43739, 43742 },
  { 43744, 43755 },
  { 43762, 43765 },
  { 43777, 43783 },
  { 43785, 43791 },
  { 43793, 43799 },
  { 43808, 43815 },
  { 43816, 43823 },
  { 43824, 43867 },
  { 43868, 43882 },
  { 43888, 44003 },
  { 44032, 55204 },
  { 55216, 55239 },
  { 55243, 55292 },
  { 63744, 64110 },
  { 64112, 64218 },
  { 64256, 64263 },
  { 64275, 64280 },
  { 64287, 64297 },
  { 64298, 64311 },
  { 64312, 64317 },
  { 64320, 64322 },
  { 64323, 64325 },
  { 64326, 64434 },
  { 64467, 64606 },
  { 64612, 64830 },
  { 64848, 64912 },
  { 64914, 64968 },
  { 65008, 65018 },
  { 65151, 65277 },
  { 65313, 65339 },
  { 65345, 65371 },
  { 65382, 65438 },
  { 65440, 65471 },
  { 65474, 65480 },
  { 65482, 65488 },
  { 65490, 65496 },
  { 65498, 65501 },
  { 65536, 65548 },
  { 65549, 65575 },
  { 65576, 65595 },
  { 65596, 65598 },
  { 65599, 65614 },
  { 65616, 65630 },
  { 65664, 65787 },
  { 65856, 65909 },
  { 66176, 66205 },
  { 66208, 66257 },
  { 66304, 66336 },
  { 66349, 66379 },
  { 66384, 66422 },
  { 66432, 66462 },
  { 66464, 66500 },
  { 66504, 66512 },
  { 66513, 66518 },
  { 66560, 66718 },
  { 66736, 66772 },
  { 66776, 66812 },
  { 66816, 66856 },
  { 66864, 66916 },
  { 66928, 66939 },
  { 66940, 66955 },
  { 66956, 66963 },
  { 66964, 66966 },
  { 66967, 66978 },
  { 66979, 66994 },
  { 66995, 67002 },
  { 67003, 67005 },
  { 67072, 67383 },
  { 67392, 67414 },
  { 67424, 67432 },
  { 67456, 67462 },
  { 67463, 67505 },
  { 67506, 67515 },
  { 67584, 67590 },
  { 67594, 67638 },
  { 67639, 67641 },
  { 67647, 67670 },
  { 67680, 67703 },
  { 67712, 67743 },
  { 67808, 67827 },
  { 67828, 67830 },
  { 67840, 67862 },
  { 67872, 67898 },
  { 67968, 68024 },
  { 68030, 68032 },
  { 68112, 68116 },
  { 68117, 68120 },
  { 68121, 68150 },
  { 68192, 68221 },
  { 68224, 68253 },
  { 68288, 68296 },
  { 68297, 68325 },
  { 68352, 68406 },
  { 68416, 68438 },
  { 68448, 68467 },
  { 68480, 68498 },
  { 68608, 68681 },
  { 68736, 68787 },
  { 68800, 68851 },
  { 68864, 68900 },
  { 69248, 69290 },
  { 69296, 69298 },
  { 69376, 69405 },
  { 69424, 69446 },
  { 69488, 69506 },
  { 69552, 69573 },
  { 69600, 69623 },
  { 69635, 69688 },
  { 69745, 69747 },
  { 69763, 69808 },
  { 69840, 69865 },
  { 69891, 69927 },
  { 69968, 70003 },
  { 70019, 70067 },
  { 70081, 70085 },
  { 70144, 70162 },
  { 70163, 70188 },
  { 70207, 70209 },
  { 70272, 70279 },
  { 70282, 70286 },
  { 70287, 70302 },
  { 70303, 70313 },
  { 70320, 70367 },
  { 70405, 70413 },
  { 70415, 70417 },
  { 70419, 70441 },
  { 70442, 70449 },
  { 70450, 70452 },
  { 70453, 70458 },
  { 70493, 70498 },
  { 70656, 70709 },
  { 70727, 70731 },
  { 70751, 70754 },
  { 70784, 70832 },
  { 70852, 70854 },
  { 71040, 71087 },
  { 71128, 71132 },
  { 71168, 71216 },
  { 71296, 71339 },
  { 71424, 71451 },
  { 71488, 71495 },
  { 71680, 71724 },
  { 71840, 71904 },
  { 71935, 71943 },
  { 71948, 71956 },
  { 71957, 71959 },
  { 71960, 71984 },
  { 72096, 72104 },
  { 72106, 72145 },
  { 72203, 72243 },
  { 72284, 72330 },
  { 72368, 72441 },
  { 72704, 72713 },
  { 72714, 72751 },
  { 72818, 72848 },
  { 72960, 72967 },
  { 72968, 72970 },
  { 72971, 73009 },
  { 73056, 73062 },
  { 73063, 73065 },
  { 73066, 73098 },
  { 73440, 73459 },
  { 73476, 73489 },
  { 73490, 73524 },
  { 73728, 74650 },
  { 74752, 74863 },
  { 74880, 75076 },
  { 77712, 77809 },
  { 77824, 78896 },
  { 78913, 78919 },
  { 82944, 83527 },
  { 92160, 92729 },
  { 92736, 92767 },
  { 92784, 92863 },
  { 92880, 92910 },
  { 92928, 92976 },
  { 92992, 92996 },
  { 93027, 93048 },
  { 93053, 93072 },
  { 93760, 93824 },
  { 93952, 94027 },
  { 94099, 94112 },
  { 94176, 94178 },
  { 94208, 100344 },
  { 100352, 101590 },
  { 101632, 101641 },
  { 110576, 110580 },
  { 110581, 110588 },
  { 110589, 110591 },
  { 110592, 110883 },
  { 110928, 110931 },
  { 110948, 110952 },
  { 110960, 111356 },
  { 113664, 113771 },
  { 113776, 113789 },
  { 113792, 113801 },
  { 113808, 113818 },
  { 119808, 119893 },
  { 119894, 119965 },
  { 119966, 119968 },
  { 119973, 119975 },
  { 119977, 119981 },
  { 119982, 119994 },
  { 119997, 120004 },
  { 120005, 120070 },
  { 120071, 120075 },
  { 120077, 120085 },
  { 120086, 120093 },
  { 120094, 120122 },
  { 120123, 120127 },
  { 120128, 120133 },
  { 120138, 120145 },
  { 120146, 120486 },
  { 120488, 120513 },
  { 120514, 120539 },
  { 120540, 120571 },
  { 120572, 120597 },
  { 120598, 120629 },
  { 120630, 120655 },
  { 120656, 120687 },
  { 120688, 120713 },
  { 120714, 120745 },
  { 120746, 120771 },
  { 120772, 120780 },
  { 122624, 122655 },
  { 122661, 122667 },
  { 122928, 122990 },
  { 123136, 123181 },
  { 123191, 123198 },
  { 123536, 123566 },
  { 123584, 123628 },
  { 124112, 124140 },
  { 124896, 124903 },
  { 124904, 124908 },
  { 124909, 124911 },
  { 124912, 124927 },
  { 124928, 125125 },
  { 125184, 125252 },
  { 126464, 126468 },
  { 126469, 126496 },
  { 126497, 126499 },
  { 126505, 126515 },
  { 126516, 126520 },
  { 126541, 126544 },
  { 126545, 126547 },
  { 126561, 126563 },
  { 126567, 126571 },
  { 126572, 126579 },
  { 126580, 126584 },
  { 126585, 126589 },
  { 126592, 126602 },
  { 126603, 126620 },
  { 126625, 126628 },
  { 126629, 126634 },
  { 126635, 126652 },
  { 131072, 173792 },
  { 173824, 177978 },
  { 177984, 178206 },
  { 178208, 183970 },
  { 183984, 191457 },
  { 194560, 195102 },
  { 196608, 201547 },
  { 201552, 205744 }
};

bool is_tsp_id_start (int32_t codepoint) {
  return bsearch(&codepoint, tsp_id_start, sizeof(tsp_id_start) / sizeof(tsp_id_start[0]), sizeof(tsp_id_start[0]), tsprange_contains);
}

static const struct TSPRange tsp_id_continue[] = {
  { 48, 58 },
  { 65, 91 },
  { 97, 123 },
  { 192, 215 },
  { 216, 247 },
  { 248, 706 },
  { 710, 722 },
  { 736, 741 },
  { 768, 885 },
  { 886, 888 },
  { 891, 894 },
  { 904, 907 },
  { 910, 930 },
  { 931, 1014 },
  { 1015, 1154 },
  { 1155, 1160 },
  { 1162, 1328 },
  { 1329, 1367 },
  { 1376, 1417 },
  { 1425, 1470 },
  { 1473, 1475 },
  { 1476, 1478 },
  { 1488, 1515 },
  { 1519, 1523 },
  { 1552, 1563 },
  { 1568, 1642 },
  { 1646, 1748 },
  { 1749, 1757 },
  { 1759, 1769 },
  { 1770, 1789 },
  { 1808, 1867 },
  { 1869, 1970 },
  { 1984, 2038 },
  { 2048, 2094 },
  { 2112, 2140 },
  { 2144, 2155 },
  { 2160, 2184 },
  { 2185, 2191 },
  { 2200, 2274 },
  { 2275, 2404 },
  { 2406, 2416 },
  { 2417, 2436 },
  { 2437, 2445 },
  { 2447, 2449 },
  { 2451, 2473 },
  { 2474, 2481 },
  { 2486, 2490 },
  { 2492, 2501 },
  { 2503, 2505 },
  { 2507, 2511 },
  { 2524, 2526 },
  { 2527, 2532 },
  { 2534, 2546 },
  { 2561, 2564 },
  { 2565, 2571 },
  { 2575, 2577 },
  { 2579, 2601 },
  { 2602, 2609 },
  { 2610, 2612 },
  { 2613, 2615 },
  { 2616, 2618 },
  { 2622, 2627 },
  { 2631, 2633 },
  { 2635, 2638 },
  { 2649, 2653 },
  { 2662, 2678 },
  { 2689, 2692 },
  { 2693, 2702 },
  { 2703, 2706 },
  { 2707, 2729 },
  { 2730, 2737 },
  { 2738, 2740 },
  { 2741, 2746 },
  { 2748, 2758 },
  { 2759, 2762 },
  { 2763, 2766 },
  { 2784, 2788 },
  { 2790, 2800 },
  { 2809, 2816 },
  { 2817, 2820 },
  { 2821, 2829 },
  { 2831, 2833 },
  { 2835, 2857 },
  { 2858, 2865 },
  { 2866, 2868 },
  { 2869, 2874 },
  { 2876, 2885 },
  { 2887, 2889 },
  { 2891, 2894 },
  { 2901, 2904 },
  { 2908, 2910 },
  { 2911, 2916 },
  { 2918, 2928 },
  { 2946, 2948 },
  { 2949, 2955 },
  { 2958, 2961 },
  { 2962, 2966 },
  { 2969, 2971 },
  { 2974, 2976 },
  { 2979, 2981 },
  { 2984, 2987 },
  { 2990, 3002 },
  { 3006, 3011 },
  { 3014, 3017 },
  { 3018, 3022 },
  { 3046, 3056 },
  { 3072, 3085 },
  { 3086, 3089 },
  { 3090, 3113 },
  { 3114, 3130 },
  { 3132, 3141 },
  { 3142, 3145 },
  { 3146, 3150 },
  { 3157, 3159 },
  { 3160, 3163 },
  { 3168, 3172 },
  { 3174, 3184 },
  { 3200, 3204 },
  { 3205, 3213 },
  { 3214, 3217 },
  { 3218, 3241 },
  { 3242, 3252 },
  { 3253, 3258 },
  { 3260, 3269 },
  { 3270, 3273 },
  { 3274, 3278 },
  { 3285, 3287 },
  { 3293, 3295 },
  { 3296, 3300 },
  { 3302, 3312 },
  { 3313, 3316 },
  { 3328, 3341 },
  { 3342, 3345 },
  { 3346, 3397 },
  { 3398, 3401 },
  { 3402, 3407 },
  { 3412, 3416 },
  { 3423, 3428 },
  { 3430, 3440 },
  { 3450, 3456 },
  { 3457, 3460 },
  { 3461, 3479 },
  { 3482, 3506 },
  { 3507, 3516 },
  { 3520, 3527 },
  { 3535, 3541 },
  { 3544, 3552 },
  { 3558, 3568 },
  { 3570, 3572 },
  { 3585, 3643 },
  { 3648, 3663 },
  { 3664, 3674 },
  { 3713, 3715 },
  { 3718, 3723 },
  { 3724, 3748 },
  { 3751, 3774 },
  { 3776, 3781 },
  { 3784, 3791 },
  { 3792, 3802 },
  { 3804, 3808 },
  { 3864, 3866 },
  { 3872, 3882 },
  { 3902, 3912 },
  { 3913, 3949 },
  { 3953, 3973 },
  { 3974, 3992 },
  { 3993, 4029 },
  { 4096, 4170 },
  { 4176, 4254 },
  { 4256, 4294 },
  { 4304, 4347 },
  { 4348, 4681 },
  { 4682, 4686 },
  { 4688, 4695 },
  { 4698, 4702 },
  { 4704, 4745 },
  { 4746, 4750 },
  { 4752, 4785 },
  { 4786, 4790 },
  { 4792, 4799 },
  { 4802, 4806 },
  { 4808, 4823 },
  { 4824, 4881 },
  { 4882, 4886 },
  { 4888, 4955 },
  { 4957, 4960 },
  { 4992, 5008 },
  { 5024, 5110 },
  { 5112, 5118 },
  { 5121, 5741 },
  { 5743, 5760 },
  { 5761, 5787 },
  { 5792, 5867 },
  { 5870, 5881 },
  { 5888, 5910 },
  { 5919, 5941 },
  { 5952, 5972 },
  { 5984, 5997 },
  { 5998, 6001 },
  { 6002, 6004 },
  { 6016, 6100 },
  { 6108, 6110 },
  { 6112, 6122 },
  { 6155, 6158 },
  { 6159, 6170 },
  { 6176, 6265 },
  { 6272, 6315 },
  { 6320, 6390 },
  { 6400, 6431 },
  { 6432, 6444 },
  { 6448, 6460 },
  { 6470, 6510 },
  { 6512, 6517 },
  { 6528, 6572 },
  { 6576, 6602 },
  { 6608, 6618 },
  { 6656, 6684 },
  { 6688, 6751 },
  { 6752, 6781 },
  { 6783, 6794 },
  { 6800, 6810 },
  { 6832, 6846 },
  { 6847, 6863 },
  { 6912, 6989 },
  { 6992, 7002 },
  { 7019, 7028 },
  { 7040, 7156 },
  { 7168, 7224 },
  { 7232, 7242 },
  { 7245, 7294 },
  { 7296, 7305 },
  { 7312, 7355 },
  { 7357, 7360 },
  { 7376, 7379 },
  { 7380, 7419 },
  { 7424, 7958 },
  { 7960, 7966 },
  { 7968, 8006 },
  { 8008, 8014 },
  { 8016, 8024 },
  { 8031, 8062 },
  { 8064, 8117 },
  { 8118, 8125 },
  { 8130, 8133 },
  { 8134, 8141 },
  { 8144, 8148 },
  { 8150, 8156 },
  { 8160, 8173 },
  { 8178, 8181 },
  { 8182, 8189 },
  { 8255, 8257 },
  { 8336, 8349 },
  { 8400, 8413 },
  { 8421, 8433 },
  { 8458, 8468 },
  { 8473, 8478 },
  { 8490, 8494 },
  { 8495, 8506 },
  { 8508, 8512 },
  { 8517, 8522 },
  { 8544, 8585 },
  { 11264, 11493 },
  { 11499, 11508 },
  { 11520, 11558 },
  { 11568, 11624 },
  { 11647, 11671 },
  { 11680, 11687 },
  { 11688, 11695 },
  { 11696, 11703 },
  { 11704, 11711 },
  { 11712, 11719 },
  { 11720, 11727 },
  { 11728, 11735 },
  { 11736, 11743 },
  { 11744, 11776 },
  { 12293, 12296 },
  { 12321, 12336 },
  { 12337, 12342 },
  { 12344, 12349 },
  { 12353, 12439 },
  { 12441, 12443 },
  { 12445, 12448 },
  { 12449, 12539 },
  { 12540, 12544 },
  { 12549, 12592 },
  { 12593, 12687 },
  { 12704, 12736 },
  { 12784, 12800 },
  { 13312, 19904 },
  { 19968, 42125 },
  { 42192, 42238 },
  { 42240, 42509 },
  { 42512, 42540 },
  { 42560, 42608 },
  { 42612, 42622 },
  { 42623, 42738 },
  { 42775, 42784 },
  { 42786, 42889 },
  { 42891, 42955 },
  { 42960, 42962 },
  { 42965, 42970 },
  { 42994, 43048 },
  { 43072, 43124 },
  { 43136, 43206 },
  { 43216, 43226 },
  { 43232, 43256 },
  { 43261, 43310 },
  { 43312, 43348 },
  { 43360, 43389 },
  { 43392, 43457 },
  { 43471, 43482 },
  { 43488, 43519 },
  { 43520, 43575 },
  { 43584, 43598 },
  { 43600, 43610 },
  { 43616, 43639 },
  { 43642, 43715 },
  { 43739, 43742 },
  { 43744, 43760 },
  { 43762, 43767 },
  { 43777, 43783 },
  { 43785, 43791 },
  { 43793, 43799 },
  { 43808, 43815 },
  { 43816, 43823 },
  { 43824, 43867 },
  { 43868, 43882 },
  { 43888, 44011 },
  { 44012, 44014 },
  { 44016, 44026 },
  { 44032, 55204 },
  { 55216, 55239 },
  { 55243, 55292 },
  { 63744, 64110 },
  { 64112, 64218 },
  { 64256, 64263 },
  { 64275, 64280 },
  { 64285, 64297 },
  { 64298, 64311 },
  { 64312, 64317 },
  { 64320, 64322 },
  { 64323, 64325 },
  { 64326, 64434 },
  { 64467, 64606 },
  { 64612, 64830 },
  { 64848, 64912 },
  { 64914, 64968 },
  { 65008, 65018 },
  { 65024, 65040 },
  { 65056, 65072 },
  { 65075, 65077 },
  { 65101, 65104 },
  { 65151, 65277 },
  { 65296, 65306 },
  { 65313, 65339 },
  { 65345, 65371 },
  { 65382, 65471 },
  { 65474, 65480 },
  { 65482, 65488 },
  { 65490, 65496 },
  { 65498, 65501 },
  { 65536, 65548 },
  { 65549, 65575 },
  { 65576, 65595 },
  { 65596, 65598 },
  { 65599, 65614 },
  { 65616, 65630 },
  { 65664, 65787 },
  { 65856, 65909 },
  { 66176, 66205 },
  { 66208, 66257 },
  { 66304, 66336 },
  { 66349, 66379 },
  { 66384, 66427 },
  { 66432, 66462 },
  { 66464, 66500 },
  { 66504, 66512 },
  { 66513, 66518 },
  { 66560, 66718 },
  { 66720, 66730 },
  { 66736, 66772 },
  { 66776, 66812 },
  { 66816, 66856 },
  { 66864, 66916 },
  { 66928, 66939 },
  { 66940, 66955 },
  { 66956, 66963 },
  { 66964, 66966 },
  { 66967, 66978 },
  { 66979, 66994 },
  { 66995, 67002 },
  { 67003, 67005 },
  { 67072, 67383 },
  { 67392, 67414 },
  { 67424, 67432 },
  { 67456, 67462 },
  { 67463, 67505 },
  { 67506, 67515 },
  { 67584, 67590 },
  { 67594, 67638 },
  { 67639, 67641 },
  { 67647, 67670 },
  { 67680, 67703 },
  { 67712, 67743 },
  { 67808, 67827 },
  { 67828, 67830 },
  { 67840, 67862 },
  { 67872, 67898 },
  { 67968, 68024 },
  { 68030, 68032 },
  { 68096, 68100 },
  { 68101, 68103 },
  { 68108, 68116 },
  { 68117, 68120 },
  { 68121, 68150 },
  { 68152, 68155 },
  { 68192, 68221 },
  { 68224, 68253 },
  { 68288, 68296 },
  { 68297, 68327 },
  { 68352, 68406 },
  { 68416, 68438 },
  { 68448, 68467 },
  { 68480, 68498 },
  { 68608, 68681 },
  { 68736, 68787 },
  { 68800, 68851 },
  { 68864, 68904 },
  { 68912, 68922 },
  { 69248, 69290 },
  { 69291, 69293 },
  { 69296, 69298 },
  { 69373, 69405 },
  { 69424, 69457 },
  { 69488, 69510 },
  { 69552, 69573 },
  { 69600, 69623 },
  { 69632, 69703 },
  { 69734, 69750 },
  { 69759, 69819 },
  { 69840, 69865 },
  { 69872, 69882 },
  { 69888, 69941 },
  { 69942, 69952 },
  { 69956, 69960 },
  { 69968, 70004 },
  { 70016, 70085 },
  { 70089, 70093 },
  { 70094, 70107 },
  { 70144, 70162 },
  { 70163, 70200 },
  { 70206, 70210 },
  { 70272, 70279 },
  { 70282, 70286 },
  { 70287, 70302 },
  { 70303, 70313 },
  { 70320, 70379 },
  { 70384, 70394 },
  { 70400, 70404 },
  { 70405, 70413 },
  { 70415, 70417 },
  { 70419, 70441 },
  { 70442, 70449 },
  { 70450, 70452 },
  { 70453, 70458 },
  { 70459, 70469 },
  { 70471, 70473 },
  { 70475, 70478 },
  { 70493, 70500 },
  { 70502, 70509 },
  { 70512, 70517 },
  { 70656, 70731 },
  { 70736, 70746 },
  { 70750, 70754 },
  { 70784, 70854 },
  { 70864, 70874 },
  { 71040, 71094 },
  { 71096, 71105 },
  { 71128, 71134 },
  { 71168, 71233 },
  { 71248, 71258 },
  { 71296, 71353 },
  { 71360, 71370 },
  { 71424, 71451 },
  { 71453, 71468 },
  { 71472, 71482 },
  { 71488, 71495 },
  { 71680, 71739 },
  { 71840, 71914 },
  { 71935, 71943 },
  { 71948, 71956 },
  { 71957, 71959 },
  { 71960, 71990 },
  { 71991, 71993 },
  { 71995, 72004 },
  { 72016, 72026 },
  { 72096, 72104 },
  { 72106, 72152 },
  { 72154, 72162 },
  { 72163, 72165 },
  { 72192, 72255 },
  { 72272, 72346 },
  { 72368, 72441 },
  { 72704, 72713 },
  { 72714, 72759 },
  { 72760, 72769 },
  { 72784, 72794 },
  { 72818, 72848 },
  { 72850, 72872 },
  { 72873, 72887 },
  { 72960, 72967 },
  { 72968, 72970 },
  { 72971, 73015 },
  { 73020, 73022 },
  { 73023, 73032 },
  { 73040, 73050 },
  { 73056, 73062 },
  { 73063, 73065 },
  { 73066, 73103 },
  { 73104, 73106 },
  { 73107, 73113 },
  { 73120, 73130 },
  { 73440, 73463 },
  { 73472, 73489 },
  { 73490, 73531 },
  { 73534, 73539 },
  { 73552, 73562 },
  { 73728, 74650 },
  { 74752, 74863 },
  { 74880, 75076 },
  { 77712, 77809 },
  { 77824, 78896 },
  { 78912, 78934 },
  { 82944, 83527 },
  { 92160, 92729 },
  { 92736, 92767 },
  { 92768, 92778 },
  { 92784, 92863 },
  { 92864, 92874 },
  { 92880, 92910 },
  { 92912, 92917 },
  { 92928, 92983 },
  { 92992, 92996 },
  { 93008, 93018 },
  { 93027, 93048 },
  { 93053, 93072 },
  { 93760, 93824 },
  { 93952, 94027 },
  { 94031, 94088 },
  { 94095, 94112 },
  { 94176, 94178 },
  { 94179, 94181 },
  { 94192, 94194 },
  { 94208, 100344 },
  { 100352, 101590 },
  { 101632, 101641 },
  { 110576, 110580 },
  { 110581, 110588 },
  { 110589, 110591 },
  { 110592, 110883 },
  { 110928, 110931 },
  { 110948, 110952 },
  { 110960, 111356 },
  { 113664, 113771 },
  { 113776, 113789 },
  { 113792, 113801 },
  { 113808, 113818 },
  { 113821, 113823 },
  { 118528, 118574 },
  { 118576, 118599 },
  { 119141, 119146 },
  { 119149, 119155 },
  { 119163, 119171 },
  { 119173, 119180 },
  { 119210, 119214 },
  { 119362, 119365 },
  { 119808, 119893 },
  { 119894, 119965 },
  { 119966, 119968 },
  { 119973, 119975 },
  { 119977, 119981 },
  { 119982, 119994 },
  { 119997, 120004 },
  { 120005, 120070 },
  { 120071, 120075 },
  { 120077, 120085 },
  { 120086, 120093 },
  { 120094, 120122 },
  { 120123, 120127 },
  { 120128, 120133 },
  { 120138, 120145 },
  { 120146, 120486 },
  { 120488, 120513 },
  { 120514, 120539 },
  { 120540, 120571 },
  { 120572, 120597 },
  { 120598, 120629 },
  { 120630, 120655 },
  { 120656, 120687 },
  { 120688, 120713 },
  { 120714, 120745 },
  { 120746, 120771 },
  { 120772, 120780 },
  { 120782, 120832 },
  { 121344, 121399 },
  { 121403, 121453 },
  { 121499, 121504 },
  { 121505, 121520 },
  { 122624, 122655 },
  { 122661, 122667 },
  { 122880, 122887 },
  { 122888, 122905 },
  { 122907, 122914 },
  { 122915, 122917 },
  { 122918, 122923 },
  { 122928, 122990 },
  { 123136, 123181 },
  { 123184, 123198 },
  { 123200, 123210 },
  { 123536, 123567 },
  { 123584, 123642 },
  { 124112, 124154 },
  { 124896, 124903 },
  { 124904, 124908 },
  { 124909, 124911 },
  { 124912, 124927 },
  { 124928, 125125 },
  { 125136, 125143 },
  { 125184, 125260 },
  { 125264, 125274 },
  { 126464, 126468 },
  { 126469, 126496 },
  { 126497, 126499 },
  { 126505, 126515 },
  { 126516, 126520 },
  { 126541, 126544 },
  { 126545, 126547 },
  { 126561, 126563 },
  { 126567, 126571 },
  { 126572, 126579 },
  { 126580, 126584 },
  { 126585, 126589 },
  { 126592, 126602 },
  { 126603, 126620 },
  { 126625, 126628 },
  { 126629, 126634 },
  { 126635, 126652 },
  { 130032, 130042 },
  { 131072, 173792 },
  { 173824, 177978 },
  { 177984, 178206 },
  { 178208, 183970 },
  { 183984, 191457 },
  { 194560, 195102 },
  { 196608, 201547 },
  { 201552, 205744 },
  { 917760, 918000 }
};

bool is_tsp_id_continue (int32_t codepoint) {
  return bsearch(&codepoint, tsp_id_continue, sizeof(tsp_id_continue) / sizeof(tsp_id_continue[0]), sizeof(tsp_id_continue[0]), tsprange_contains);
}

static const struct TSPRange tsp_whitespace[] = {
  { 9, 14 },
  { 32, 33 },
  { 133, 134 },
  { 160, 161 },
  { 5760, 5761 },
  { 8192, 8203 },
  { 8232, 8234 },
  { 8239, 8240 },
  { 8287, 8288 },
  { 12288, 12289 }
};
bool is_tsp_whitespace (int32_t codepoint) {
  return bsearch(&codepoint, tsp_whitespace, sizeof(tsp_whitespace) / sizeof(tsp_whitespace[0]), sizeof(tsp_whitespace[0]), tsprange_contains);
}
