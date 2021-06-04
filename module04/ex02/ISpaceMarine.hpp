#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

class ISpaceMarine : public ISpaceMarine {
	public:

	ISpaceMarine(void);
	ISpaceMarine(ISpaceMarine const & rhs);
	~ISpaceMarine(void);

	ISpaceMarine const & operator=(ISpaceMarine const & rhs);

	protected:

	private:
};

#endif

