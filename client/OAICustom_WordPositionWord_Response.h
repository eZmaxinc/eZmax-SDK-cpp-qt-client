/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_WordPositionWord_Response.h
 *
 * A Word Position Object
 */

#ifndef OAICustom_WordPositionWord_Response_H
#define OAICustom_WordPositionWord_Response_H

#include <QJsonObject>

#include "OAICustom_WordPositionOccurence_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_WordPositionWord_Response : public OAIObject {
public:
    OAICustom_WordPositionWord_Response();
    OAICustom_WordPositionWord_Response(QString json);
    ~OAICustom_WordPositionWord_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSWord() const;
    void setSWord(const QString &s_word);
    bool is_s_word_Set() const;
    bool is_s_word_Valid() const;

    QList<OAICustom_WordPositionOccurence_Response> getAObjWordPositionOccurence() const;
    void setAObjWordPositionOccurence(const QList<OAICustom_WordPositionOccurence_Response> &a_obj_word_position_occurence);
    bool is_a_obj_word_position_occurence_Set() const;
    bool is_a_obj_word_position_occurence_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_word;
    bool m_s_word_isSet;
    bool m_s_word_isValid;

    QList<OAICustom_WordPositionOccurence_Response> a_obj_word_position_occurence;
    bool m_a_obj_word_position_occurence_isSet;
    bool m_a_obj_word_position_occurence_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_WordPositionWord_Response)

#endif // OAICustom_WordPositionWord_Response_H
