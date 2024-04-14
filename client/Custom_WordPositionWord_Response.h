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
 * Custom_WordPositionWord_Response.h
 *
 * A Word Position Object
 */

#ifndef Custom_WordPositionWord_Response_H
#define Custom_WordPositionWord_Response_H

#include <QJsonObject>

#include "Custom_WordPositionOccurence_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_WordPositionOccurence_Response;

class Custom_WordPositionWord_Response : public Object {
public:
    Custom_WordPositionWord_Response();
    Custom_WordPositionWord_Response(QString json);
    ~Custom_WordPositionWord_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSWord() const;
    void setSWord(const QString &s_word);
    bool is_s_word_Set() const;
    bool is_s_word_Valid() const;

    QList<Custom_WordPositionOccurence_Response> getAObjWordPositionOccurence() const;
    void setAObjWordPositionOccurence(const QList<Custom_WordPositionOccurence_Response> &a_obj_word_position_occurence);
    bool is_a_obj_word_position_occurence_Set() const;
    bool is_a_obj_word_position_occurence_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_word;
    bool m_s_word_isSet;
    bool m_s_word_isValid;

    QList<Custom_WordPositionOccurence_Response> m_a_obj_word_position_occurence;
    bool m_a_obj_word_position_occurence_isSet;
    bool m_a_obj_word_position_occurence_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_WordPositionWord_Response)

#endif // Custom_WordPositionWord_Response_H
