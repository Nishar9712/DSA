class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seed = {}

        for index, num in enumerate(nums):
            com = target - num

            if com in seed:
                return [seed[com], index]

            seed[num] = index

        return []