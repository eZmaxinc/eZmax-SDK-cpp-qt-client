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
 * Language_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/language/getAutocomplete
 */

#ifndef Language_getAutocomplete_v2_Response_mPayload_H
#define Language_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Language_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Language_AutocompleteElement_Response;

class Language_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Language_getAutocomplete_v2_Response_mPayload();
    Language_getAutocomplete_v2_Response_mPayload(QString json);
    ~Language_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Language_AutocompleteElement_Response> getAObjLanguage() const;
    void setAObjLanguage(const QList<Language_AutocompleteElement_Response> &a_obj_language);
    bool is_a_obj_language_Set() const;
    bool is_a_obj_language_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Language_AutocompleteElement_Response> m_a_obj_language;
    bool m_a_obj_language_isSet;
    bool m_a_obj_language_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Language_getAutocomplete_v2_Response_mPayload)

#endif // Language_getAutocomplete_v2_Response_mPayload_H
