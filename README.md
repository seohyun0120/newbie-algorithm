# Coding Test Newbie

```
매주 수요일
사용 언어: C++
1회차: 20.07.08
2회차: 20.07.15
```

### 1회차
| 문제 | 소스코드 |
|-----|:------:|
| 1부터 n까지의 합 구하기 | [a.c](/1st%20week/a.c) |
| 두 개의 입력값의 합 구하기 | [b.c](/1st%20week/b.c) |
| 표준 입출력을 활용하여 문자열을 전부 대문자로 변환하기 | [c.c](/1st%20week/c.c) |
| 스택에 1,2,3 push & pop | [d.cpp](/1st%20week/d.cpp) |
| 큐에 1,2,3 push & pop | [e.cpp](/1st%20week/e.cpp) |
| [프로그래머스] [완주하지 못한 선수](https://programmers.co.kr/learn/courses/30/lessons/42576) | [f.cpp](/1st%20week/f.cpp) |

### 2회차
| 문제 | 소스코드 |
|-----|:------:|
| [[카카오 2018 신입 공채 1번]](https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/) 비밀지도 | [secretmapp.cpp](/2nd%20week/secretmap.cpp) |
| [[백준 13414] 수강신청 ](https://www.acmicpc.net/problem/13414) | [bj13414.cpp](/2nd%20week/bj13414.cpp) |
| [[카카오 2018 신입 공채 5번]](https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/) 뉴스 클러스터링 | [newsclustering.cpp](2nd%20week/newsclustering.cpp) |
| [백준 14655] 욱제는 도박쟁이야! | - |


#### vector
- 동적 배열
- 배열 크기 유동적이며 데이터 위치를 알고있을 때 사용하기 좋음
- 중간 값 삽입 삭제가 쉽지 않으며 검색 속도가 빠르진 않음

#### list
- 더블 링크드 리스트
- 포인터로 다음 값을 찾아주는 방식, 삽입 삭제 용이
- 데이터의 위치로 값에 접근할 수는 없음

#### set
- key라 불리는 원소들의 집합 (key만 사용할 때 사용)
- key를 빠르게 찾고, key가 정렬되기를 원할 때 사용
- 삽입 시 정렬

#### map
- key value 쌍으로 저장
- key를 빠르게 찾고, key가 정렬되기를 원할 때 사용
- 삽입 시 정렬

#### pair
- 두 개의 객체를 하나의 객체로 취급할 수 있게 묶어주는 클래스
