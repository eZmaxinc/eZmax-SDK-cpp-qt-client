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
 * Phonetype_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/phonetype/getAutocomplete
 */

#ifndef Phonetype_getAutocomplete_v2_Response_mPayload_H
#define Phonetype_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Phonetype_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Phonetype_AutocompleteElement_Response;

class Phonetype_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Phonetype_getAutocomplete_v2_Response_mPayload();
    Phonetype_getAutocomplete_v2_Response_mPayload(QString json);
    ~Phonetype_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Phonetype_AutocompleteElement_Response> getAObjPhonetype() const;
    void setAObjPhonetype(const QList<Phonetype_AutocompleteElement_Response> &a_obj_phonetype);
    bool is_a_obj_phonetype_Set() const;
    bool is_a_obj_phonetype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Phonetype_AutocompleteElement_Response> m_a_obj_phonetype;
    bool m_a_obj_phonetype_isSet;
    bool m_a_obj_phonetype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Phonetype_getAutocomplete_v2_Response_mPayload)

#endif // Phonetype_getAutocomplete_v2_Response_mPayload_H
