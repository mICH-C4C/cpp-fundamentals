// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
enum class ErrorCode {
  Ok,
  PasswordNeedsAtLeastNineCharacters,
  PasswordNeedsAtLeastOneNumber,
  PasswordNeedsAtLeastOneSpecialCharacter,
  PasswordNeedsAtLeastOneUppercaseLetter,
  PasswordsDoNotMatch
};