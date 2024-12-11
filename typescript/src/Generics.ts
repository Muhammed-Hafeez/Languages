function getLastItem<T>(array: T[]): T {
  return array[array.length - 1];
}

const arr: number[] = [1, 2, 3, 4, 5];
console.log(getLastItem(arr));


