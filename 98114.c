 WebGLContext::GetUniform(JSContext* cx, WebGLProgram WebGLUniformLocation *location) if ( IsContextLost ( ) )  if ( ! ValidateObject ( "getUniform: program" , prog ) )  if ( ! ValidateObject ( "getUniform: location" , location ) )  if ( location -> Program ( ) != prog )  if ( location -> ProgramGeneration ( ) != prog -> Generation ( ) )  GLuint progname = prog -> GLName ( ) ; GLint uniforms = 0 ; nsAutoArrayPtr < GLchar > uniformName ( new GLchar [ uniformNameMaxLength ] ) ; nsAutoArrayPtr < GLchar > uniformNameBracketIndex ( new GLchar [ uniformNameMaxLength + 16 ] ) ; GLint index ; for (index = 0; index < uniforms; ++index) GLsizei length ; GLint size ; if ( gl -> fGetUniformLocation ( progname , uniformName ) == location -> Location ( ) )  if ( size > 1 )  bool found_it = false ; if ( uniformName [ length - 1 ] == ']' )  length -= 3; uniformName [ length ] = 0; for (GLint arrayIndex = 1; arrayIndex < size; arrayIndex++) sprintf ( uniformNameBracketIndex . get ( ) , "%s[%d]" , uniformName . get ( ) , arrayIndex ); if ( gl -> fGetUniformLocation ( progname , uniformNameBracketIndex ) == location -> Location ( ) )  found_it = true; if ( found_it )  