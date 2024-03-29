/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIFont_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/font/getAutocomplete
 */

#ifndef OAIFont_getAutocomplete_v2_Response_mPayload_H
#define OAIFont_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIFont_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIFont_AutocompleteElement_Response;

class OAIFont_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIFont_getAutocomplete_v2_Response_mPayload();
    OAIFont_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIFont_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIFont_AutocompleteElement_Response> getAObjFont() const;
    void setAObjFont(const QList<OAIFont_AutocompleteElement_Response> &a_obj_font);
    bool is_a_obj_font_Set() const;
    bool is_a_obj_font_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIFont_AutocompleteElement_Response> a_obj_font;
    bool m_a_obj_font_isSet;
    bool m_a_obj_font_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFont_getAutocomplete_v2_Response_mPayload)

#endif // OAIFont_getAutocomplete_v2_Response_mPayload_H
