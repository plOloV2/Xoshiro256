# Xoshiro256** PRNG C Library

Lekka, statyczna biblioteka w języku C implementująca generator liczb pseudolosowych (PRNG) **Xoshiro256****. Jest to szybki i wydajny algorytm oparty na oryginalnej implementacji dostępnej na stronie *prng.di.unimi.it*.

## Cechy projektu

*   **Szybkość i wydajność:** Implementacja Xoshiro256** zoptymalizowana pod kątem generowania 64-bitowych liczb całkowitych.
*   **Bezpieczne inicjowanie (Seeding):** Funkcja `create_rand_seed` domyślnie korzysta z `/dev/urandom` w celu uzyskania wysokiej jakości ziarna losowości. W przypadku braku dostępu do tego interfejsu, automatycznie używa aktualnego czasu systemowego (`time(NULL)`).
*   **SplitMix64:** Biblioteka wykorzystuje wewnętrznie algorytm SplitMix64 do prawidłowego i bezpiecznego zainicjowania 256-bitowego stanu generatora z pojedynczego, 64-bitowego ziarna.

## Wymagania i Technologie

*   **Język:** C
*   **System budowania:** CMake (wersja minimum 3.28).

## Integracja z użyciem CMake (FetchContent)

Projekt jest skonfigurowany jako biblioteka statyczna (`xoshiro256`). Najprostszym sposobem na dołączenie jej do własnego projektu jest użycie modułu `FetchContent` w Twoim pliku `CMakeLists.txt`:
```cmake
include(FetchContent)
FetchContent_Declare(
    xoshiro256
    GIT_REPOSITORY https://github.com/plOloV2/Xoshiro256
    GIT_TAG        main
)
FetchContent_MakeAvailable(xoshiro256)

# Linkowanie biblioteki do Twojego celu (targetu)
target_link_libraries(twoj_program PRIVATE xoshiro256)
