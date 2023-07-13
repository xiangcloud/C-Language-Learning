#include <stdio.h>

/*
	给定仅有小写字母组成的字符串数组 A
	返回列表中的每个字符串中都显示的全部字符（包括重复字符）组成的列表。
	例如，如果一个字符在每个字符串中出现 3 次
	但不是4次，则需要在最终答案中包含该字符 3 次
*/

char** commonChars(char** words, int wordsSize, int* returnSize) {
    int minfreq[26], freq[26];
    for (int i = 0; i < 26; ++i) {
        minfreq[i] = INT_MAX;
        freq[i] = 0;
    }
    for (int i = 0; i < wordsSize; ++i) {
        memset(freq, 0, sizeof(freq));
        int n = strlen(words[i]);
        for (int j = 0; j < n; ++j) {
            ++freq[words[i][j] - 'a'];
        }
        for (int j = 0; j < 26; ++j) {
            minfreq[j] = fmin(minfreq[j], freq[j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += minfreq[i];
    }

    char** ans = malloc(sizeof(char*) * sum);
    *returnSize = 0;
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < minfreq[i]; ++j) {
            ans[*returnSize] = malloc(sizeof(char) * 2);
            ans[*returnSize][0] = i + 'a';
            ans[*returnSize][1] = 0;
            (*returnSize)++;
        }
    }
    return ans;
}

