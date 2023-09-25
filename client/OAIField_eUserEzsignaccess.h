/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eUserEzsignaccess.h
 *
 * The type or eZsign access the User has
 */

#ifndef OAIField_eUserEzsignaccess_H
#define OAIField_eUserEzsignaccess_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIField_eUserEzsignaccess : public OAIEnum {
public:
    OAIField_eUserEzsignaccess();
    OAIField_eUserEzsignaccess(QString json);
    ~OAIField_eUserEzsignaccess() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eUserEzsignaccess {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NO, 
        PAIDBYOFFICE, 
        PERDOCUMENT, 
        PREPAID
    };
    OAIField_eUserEzsignaccess::eOAIField_eUserEzsignaccess getValue() const;
    void setValue(const OAIField_eUserEzsignaccess::eOAIField_eUserEzsignaccess& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eUserEzsignaccess m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIField_eUserEzsignaccess)

#endif // OAIField_eUserEzsignaccess_H
