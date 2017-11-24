
{$DEFINE UNSUPPORTED_VERSION}

  {$IFDEF CONDITIONALEXPRESSIONS}
    {$IF DECLARED(CompilerVersion)}
      {$IF CompilerVersion >= 14}
        {$UNDEF UNSUPPORTED_VERSION}
      {$IFEND}
      {$IF CompilerVersion >= 17}
        {$DEFINE SUPPORTS_INLINE}
      {$IFEND}
    {$IFEND}

    {$IF DECLARED(RTLVersion)}
      {$IF RTLVersion >= 21}
        {$DEFINE SUPPORTS_TTIMESPAN}
      {$IFEND}
      {$IF RTLVersion >= 22}
        {$DEFINE SUPPORTS_TDICTIONARY}
      {$IFEND}
    {$IFEND}
  {$ENDIF}

{$IFDEF UNSUPPORTED_VERSION}
  {$MESSAGE ERROR 'TZDB requires at least Delphi 6 or FreePascal 2.0 to compile!'}
{$ENDIF}