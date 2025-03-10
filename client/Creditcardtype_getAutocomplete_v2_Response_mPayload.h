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
 * Creditcardtype_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/creditcardtype/getAutocomplete
 */

#ifndef Creditcardtype_getAutocomplete_v2_Response_mPayload_H
#define Creditcardtype_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Creditcardtype_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Creditcardtype_AutocompleteElement_Response;

class Creditcardtype_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Creditcardtype_getAutocomplete_v2_Response_mPayload();
    Creditcardtype_getAutocomplete_v2_Response_mPayload(QString json);
    ~Creditcardtype_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Creditcardtype_AutocompleteElement_Response> getAObjCreditcardtype() const;
    void setAObjCreditcardtype(const QList<Creditcardtype_AutocompleteElement_Response> &a_obj_creditcardtype);
    bool is_a_obj_creditcardtype_Set() const;
    bool is_a_obj_creditcardtype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Creditcardtype_AutocompleteElement_Response> m_a_obj_creditcardtype;
    bool m_a_obj_creditcardtype_isSet;
    bool m_a_obj_creditcardtype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardtype_getAutocomplete_v2_Response_mPayload)

#endif // Creditcardtype_getAutocomplete_v2_Response_mPayload_H
