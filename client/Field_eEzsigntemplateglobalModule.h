/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsigntemplateglobalModule.h
 *
 * The Module for the Ezsigntemplateglobal
 */

#ifndef Field_eEzsigntemplateglobalModule_H
#define Field_eEzsigntemplateglobalModule_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplateglobalModule : public Enum {
public:
    Field_eEzsigntemplateglobalModule();
    Field_eEzsigntemplateglobalModule(QString json);
    ~Field_eEzsigntemplateglobalModule() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplateglobalModule {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ALL, 
        INSCRIPTION
    };
    Field_eEzsigntemplateglobalModule::eField_eEzsigntemplateglobalModule getValue() const;
    void setValue(const Field_eEzsigntemplateglobalModule::eField_eEzsigntemplateglobalModule& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplateglobalModule m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplateglobalModule)

#endif // Field_eEzsigntemplateglobalModule_H
