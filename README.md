# get_next_line
지정한 파일의 텍스트에서 개행을 기준으로 한줄 읽어오는 함수.<br>
fd를 인자로 받아 해당 파일을 지정한 버퍼사이즈만큼 read하여 malloc을 통해 동적 할당 후 <br>
개행을 기준으로 다음 줄의 문자열을 리턴하는 함수. <br>
컴파일 시 "gcc -D BUFFER_SIZE=42" 이와같이 버퍼사이즈를 42로 설정하고 실행 할 수 있게 만듬. <br>
이 프로젝트를 마치며 fd와 동적할당의 누수 처리방식을 공부함.
