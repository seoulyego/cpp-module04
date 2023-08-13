#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain	{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& object);
		Brain&	operator=(const Brain& object);
		~Brain();

		std::string	getIdeas(int n) const;
		void		setIdeas(std::string ideas, int n);
};

#endif  // BRAIN_HPP
