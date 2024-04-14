/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsigntemplateglobalSupplier.h
 *
 * The Supplier of the Ezsigntemplateglobal
 */

#ifndef Field_eEzsigntemplateglobalSupplier_H
#define Field_eEzsigntemplateglobalSupplier_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplateglobalSupplier : public Enum {
public:
    Field_eEzsigntemplateglobalSupplier();
    Field_eEzsigntemplateglobalSupplier(QString json);
    ~Field_eEzsigntemplateglobalSupplier() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplateglobalSupplier {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CENTRIS, 
        WEBFORMS, 
        GHACQ
    };
    Field_eEzsigntemplateglobalSupplier::eField_eEzsigntemplateglobalSupplier getValue() const;
    void setValue(const Field_eEzsigntemplateglobalSupplier::eField_eEzsigntemplateglobalSupplier& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplateglobalSupplier m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplateglobalSupplier)

#endif // Field_eEzsigntemplateglobalSupplier_H
