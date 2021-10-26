/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_getWordsPositions_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions API Request
 */

#ifndef OAIEzsigndocument_getWordsPositions_v1_Request_H
#define OAIEzsigndocument_getWordsPositions_v1_Request_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_getWordsPositions_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_getWordsPositions_v1_Request();
    OAIEzsigndocument_getWordsPositions_v1_Request(QString json);
    ~OAIEzsigndocument_getWordsPositions_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEGet() const;
    void setEGet(const QString &e_get);
    bool is_e_get_Set() const;
    bool is_e_get_Valid() const;

    bool isBWordCaseSensitive() const;
    void setBWordCaseSensitive(const bool &b_word_case_sensitive);
    bool is_b_word_case_sensitive_Set() const;
    bool is_b_word_case_sensitive_Valid() const;

    QList<QString> getASWord() const;
    void setASWord(const QList<QString> &a_s_word);
    bool is_a_s_word_Set() const;
    bool is_a_s_word_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString e_get;
    bool m_e_get_isSet;
    bool m_e_get_isValid;

    bool b_word_case_sensitive;
    bool m_b_word_case_sensitive_isSet;
    bool m_b_word_case_sensitive_isValid;

    QList<QString> a_s_word;
    bool m_a_s_word_isSet;
    bool m_a_s_word_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getWordsPositions_v1_Request)

#endif // OAIEzsigndocument_getWordsPositions_v1_Request_H
