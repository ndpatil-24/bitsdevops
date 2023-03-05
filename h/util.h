// Copyright 2023 
#pragma once

namespace BitsDevops {

	class FirstAssignment
	{
		public:
			FirstAssignment() = default;
			~FirstAssignment() = default;
			
			int getCorrectAnswers();
		
		private:
			int m_questions;
			int m_correctAnswers;
	};
}
